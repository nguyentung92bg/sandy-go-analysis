/* IL2CPP: Dino.BusSand.Sdk.SandBusReview.<>c$$<Install>b__0_0
void Dino_BusSand_Sdk_SandBusReview___c___Install_b__0_0 (Dino_BusSand_Sdk_SandBusReview___c_o* __this, System_Action_bool__o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusReview.<>c$$<Install>b__0_0
   void Dino_BusSand_Sdk_SandBusReview___c___Install_b__0_0 (Dino_BusSand_Sdk_SandBusReview___c_o*
   __this, System_Action_bool__o* done, const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusReview___c___Install_b__0_0_2438d24(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04caba50;
  if ((bRam0000000004f9cc5f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9cc5f = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  uVar6 = **(undefined8 **)(lVar3 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  if ((uVar4 & 1) == 0) {
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02538e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2 + 0x18))
                (*(undefined8 *)(param_2 + 0x40),0,*(undefined8 *)(param_2 + 0x28));
      return;
    }
    return;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar7 = **(long **)(lVar3 + 0xb8);
  lVar3 = Dino_BusSand_Sdk_SandBusReview__Run_2438c20(param_2);
  if (lVar7 != 0) {
    if (lVar3 == 0) {
      thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
      uVar5 = thunk_FUN_0216e89c();
      uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
      System_NullReferenceException___ctor_483267c(uVar5,uVar6,0);
    }
    else {
      uVar4 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
      if ((uVar4 & 1) != 0) {
        if ((bRam0000000004fa84ef & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7890);
          bRam0000000004fa84ef = 1;
        }
        if (lVar7 != 0) {
          lVar8 = *(long *)(lVar7 + 0x10);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
          }
          if (pcRam0000000004fa8560 == (code *)0x0) {
            pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
          }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa8560)(lVar8,lVar3);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      thunk_FUN_021985a8(PTR_DAT_04caa3a8);
      uVar5 = thunk_FUN_0216e89c();
      uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
      System_ArgumentException___ctor_47b660c(uVar5,uVar6,0);
    }
    uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar5,uVar6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

