/* IL2CPP: Dino.BusSand.App.UI.CommerceRewardFly.<Run>d__7$$<>m__Finally1
void Dino_BusSand_App_UI_CommerceRewardFly__Run_d__7____m__Finally1 (Dino_BusSand_App_UI_CommerceRewardFly__Run_d__7_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceRewardFly.<Run>d__7$$<>m__Finally1
   void Dino_BusSand_App_UI_CommerceRewardFly__Run_d__7____m__Finally1
   (Dino_BusSand_App_UI_CommerceRewardFly__Run_d__7_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommerceRewardFly__Run_d__7____m__Finally1_22aad08(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c29c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c29c = 1;
  }
  lVar2 = *(long *)puVar1;
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Object__Destroy_43c8114(uVar4,0);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023aada8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    return;
  }
  return;
}

