/* IL2CPP: Dino.BusSand.App.DeviceMemory$$IsLowRam
bool Dino_BusSand_App_DeviceMemory__IsLowRam (Dino_BusSand_App_DeviceMemory_Snapshot_o s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.DeviceMemory$$IsLowRam
   bool Dino_BusSand_App_DeviceMemory__IsLowRam (Dino_BusSand_App_DeviceMemory_Snapshot_o s, const
   MethodInfo* method); */

bool Dino_BusSand_App_DeviceMemory__IsLowRam_214fa18(ulong *param_1)

{
  if ((-1 < (long)*param_1) && (0 < (long)param_1[1])) {
    if ((param_1[3] & 1) == 0) {
      return *param_1 < 400 || param_1[1] < 0xc80;
    }
    return true;
  }
  return false;
}

