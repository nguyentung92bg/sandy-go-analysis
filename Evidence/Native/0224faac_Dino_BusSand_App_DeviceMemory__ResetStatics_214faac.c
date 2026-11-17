/* IL2CPP: Dino.BusSand.App.DeviceMemory$$ResetStatics
void Dino_BusSand_App_DeviceMemory__ResetStatics (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.DeviceMemory$$ResetStatics
   void Dino_BusSand_App_DeviceMemory__ResetStatics (const MethodInfo* method); */

void Dino_BusSand_App_DeviceMemory__ResetStatics_214faac(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_04cab3b0;
  if ((bRam0000000004f9b7b9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab3b0);
    bRam0000000004f9b7b9 = 1;
  }
  puVar2 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
  puVar2[4] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  return;
}

