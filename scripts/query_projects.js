var http = require('https');
var projects = [ 'cactus', 'palm', 'pine' ]

var options = {
  host: 'hutscape.com'
}

projects.forEach(function(eachProject) {
  options.path = '/' + eachProject + '/_data/project.json'

  var request = http.request(options, function (res) {
    var data = ''
    res.on('data', function (chunk) {
      data += chunk
    }).on('end', function () {
      var project = JSON.parse(data)
      console.log('**********************')
      console.log("name: " + project.name)
      console.log("description: " + project.description)
      console.log("version: " + project.version)
      console.log("wireless: " + project.wireless)
      console.log("mcu: " + project.mcu)
      console.log("sensor: " + project.sensor)
      console.log("power: " + project.power)
      console.log("battery_life: " + project.battery_life)

      console.log("cogs_sgd: " + project.cogs_sgd)
      console.log("cogs_usd: " + project.cogs_usd)
      console.log("bom: " + project.bom)
      console.log("vendors: " + project.vendors)

      console.log("schedule: " + project.schedule)
      console.log("status: " + project.status)
      console.log("completion: " + project.completion)
    })
  }).on('error', function (e) {
    console.log(e.message)
  }).end()
})
