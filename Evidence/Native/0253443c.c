/* IL2CPP: Dino.BusSand.Sdk.SandBusAdConfig.<>c__DisplayClass4_0$$<RegisterOnDataUpdated>b__0
void Dino_BusSand_Sdk_SandBusAdConfig___c__DisplayClass4_0___RegisterOnDataUpdated_b__0 (Dino_BusSand_Sdk_SandBusAdConfig___c__DisplayClass4_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusAdConfig.<>c__DisplayClass4_0$$<RegisterOnDataUpdated>b__0
   void Dino_BusSand_Sdk_SandBusAdConfig___c__DisplayClass4_0___RegisterOnDataUpdated_b__0
   (Dino_BusSand_Sdk_SandBusAdConfig___c__DisplayClass4_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusAdConfig___c__DisplayClass4_0___RegisterOnDataUpdated_b__0_243443c
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lStack_28;
  
  puVar1 = PTR_DAT_04cbf1a8;
  if ((bRam0000000004f9cc39 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf1a8);
    bRam0000000004f9cc39 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
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
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
  }
  return;
}

