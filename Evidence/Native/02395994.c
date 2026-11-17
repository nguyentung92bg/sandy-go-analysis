/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyBytes$$ToArray
System_Byte_array* Dino_BusSand_App_Meta_Journey_JourneyBytes__ToArray (Dino_BusSand_App_Meta_Journey_JourneyBytes_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyBytes$$ToArray
   System_Byte_array* Dino_BusSand_App_Meta_Journey_JourneyBytes__ToArray
   (Dino_BusSand_App_Meta_Journey_JourneyBytes_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_Journey_JourneyBytes__ToArray_2295994(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_04caaad0;
  if ((bRam0000000004f9c1ff & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caaad0);
    bRam0000000004f9c1ff = 1;
  }
  uVar2 = FUN_02133068(*(undefined8 *)puVar1,*(undefined4 *)(param_1 + 0x18));
  System_Buffer__BlockCopy_485a108
            (*(undefined8 *)(param_1 + 0x10),0,uVar2,0,*(undefined4 *)(param_1 + 0x18),0);
  return uVar2;
}

