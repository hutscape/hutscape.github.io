var http = require('https');
var projects = [ 'cactus', 'palm', 'pine' ]

var options = {
  host: 'hutscape.com'
}

projects.forEach(function(eachProject, sequence) {
  var index = sequence + 1
  options.path = '/' + eachProject + '/_data/project.json'

  var request = http.request(options, function (res) {
    var data = ''
    res.on('data', function (chunk) {
      data += chunk
    }).on('end', function () {
      var project = JSON.parse(data)
      console.log('-------------------------')
      for (var key in project) {
        if (project.hasOwnProperty(key)) {
          console.log(key + ': ' + project[key]);
        }
      }
    })
  }).on('error', function (e) {
    console.log(e.message)
  }).end()
})
