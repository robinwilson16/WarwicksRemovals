using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Threading.Tasks;

namespace WarwicksRemovals.Models
{
    public class SelectListData
    {
        [StringLength(10)]
        [Required]
        public string Code { get; set; }

        [StringLength(255)]
        [Required]
        public string Description { get; set; }

        [StringLength(50)]
        [Required]
        public string Domain { get; set; }

        public bool IsEnabled { get; set; }

        public int SortOrder { get; set; }
    }
}
