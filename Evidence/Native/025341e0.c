/* IL2CPP: Dino.BusSand.Sdk.SandBusAdConfig$$Announce
void Dino_BusSand_Sdk_SandBusAdConfig__Announce (System_Action_o* onDataUpdated, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusAdConfig$$Announce
   void Dino_BusSand_Sdk_SandBusAdConfig__Announce (System_Action_o* onDataUpdated, const
   MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusAdConfig__Announce_24341e0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lStack_28;
  
  puVar1 = PTR_DAT_04caa210;
  if ((bRam0000000004f9cc37 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cbf1c8);
    bRam0000000004f9cc37 = 1;
  }
  lStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Application__get_isPlaying_4351eec(0);
  if ((((uVar2 & 1) != 0) &&
      (uVar2 = Dino_IGlobalService_object___TryGet_37f7630
                         (&lStack_28,*(undefined8 *)PTR_DAT_04cbf1c8), (uVar2 & 1) != 0)) &&
     (lStack_28 != 0)) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
  }
  return;
}

