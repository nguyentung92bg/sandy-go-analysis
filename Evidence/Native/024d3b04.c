/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass101_0$$<Gulp>b__0
void Dino_BusSand_View_MechanicLayer___c__DisplayClass101_0___Gulp_b__0 (Dino_BusSand_View_MechanicLayer___c__DisplayClass101_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass101_0$$<Gulp>b__0
   void Dino_BusSand_View_MechanicLayer___c__DisplayClass101_0___Gulp_b__0
   (Dino_BusSand_View_MechanicLayer___c__DisplayClass101_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_View_MechanicLayer___c__DisplayClass101_0___Gulp_b__0_23d3b04
               (undefined4 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca09 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ca09 = 1;
  }
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar1 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(param_2 + 0x18);
  uVar8 = Dino_BusSand_Easing__Evaluate_238b7d0(param_1,3,0);
  puVar2 = PTR_DAT_04ca9ae8;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9c9e0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa0d8,lVar1,0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caa130);
    bRam0000000004f9c9e0 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar1,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  plVar6 = (long *)(lVar3 + 0xe8);
  if (*plVar6 == 0) {
    lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa0d8);
    UnityEngine_MaterialPropertyBlock___ctor_4372b28(lVar3,0);
    *plVar6 = lVar3;
    thunk_FUN_02134474(plVar6,lVar3);
  }
  if (lVar1 != 0) {
    UnityEngine_Renderer__GetPropertyBlock_4373a20(lVar1,*plVar6,0);
    if (*plVar6 != 0) {
      UnityEngine_MaterialPropertyBlock__SetFloat_4372e2c
                (uVar8,*plVar6,*(undefined8 *)PTR_DAT_04caa130,0);
      lVar3 = *plVar6;
      if ((bRam0000000004fa68bf & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf67a0,lVar3,0);
        bRam0000000004fa68bf = 1;
      }
      if (lVar1 != 0) {
        lVar5 = *(long *)(lVar1 + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar1,0);
        }
        uVar7 = 0;
        if (lVar3 != 0) {
          uVar7 = *(undefined8 *)(lVar3 + 0x10);
        }
        if (pcRam0000000004fa6908 == (code *)0x0) {
          pcRam0000000004fa6908 = (code *)FUN_02132f40(&UNK_00e2f2e7);
        }
                    /* WARNING: Could not recover jumptable at 0x04473688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa6908)(lVar5,uVar7);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

