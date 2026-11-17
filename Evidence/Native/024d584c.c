/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass79_0$$<CycleDoor>b__0
void Dino_BusSand_View_MechanicLayer___c__DisplayClass79_0___CycleDoor_b__0 (Dino_BusSand_View_MechanicLayer___c__DisplayClass79_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass79_0$$<CycleDoor>b__0
   void Dino_BusSand_View_MechanicLayer___c__DisplayClass79_0___CycleDoor_b__0
   (Dino_BusSand_View_MechanicLayer___c__DisplayClass79_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_View_MechanicLayer___c__DisplayClass79_0___CycleDoor_b__0_23d584c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x1c) != *(int *)(param_1 + 0x18)) {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x20);
    fVar11 = *(float *)(param_1 + 0x28);
    fVar8 = (float)Dino_BusSand_Easing__Evaluate_238b7d0(5,0);
    if (lVar5 != 0) {
      fVar10 = 1.0;
      if (fVar8 <= 1.0) {
        fVar10 = fVar8;
      }
      fVar9 = 0.0;
      if (0.0 <= fVar8) {
        fVar9 = fVar10;
      }
      fVar11 = fVar11 + (1.0 - fVar11) * fVar9;
      if ((bRam0000000004f9c9d8 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caa0d8,lVar4,0);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        FUN_02132f7c(PTR_DAT_04caa0e0);
        bRam0000000004f9c9d8 = 1;
      }
      puVar1 = PTR_DAT_04ca9ae8;
      if (lVar4 != 0) {
        uVar7 = *(undefined8 *)(lVar4 + 0x10);
        *(float *)(lVar4 + 0x18) = fVar11;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
        if ((uVar2 & 1) != 0) {
          return;
        }
        plVar3 = (long *)(lVar5 + 0xa8);
        if (*plVar3 == 0) {
          lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa0d8);
          UnityEngine_MaterialPropertyBlock___ctor_4372b28(lVar5,0);
          *plVar3 = lVar5;
          thunk_FUN_02134474(plVar3,lVar5);
        }
        if (*(long *)(lVar4 + 0x10) != 0) {
          UnityEngine_Renderer__GetPropertyBlock_4373a24(*(long *)(lVar4 + 0x10),*plVar3,0,0);
          if (*plVar3 != 0) {
            UnityEngine_MaterialPropertyBlock__SetFloat_4372e2c
                      (fVar11,*plVar3,*(undefined8 *)PTR_DAT_04caa0e0,0);
            lVar4 = *(long *)(lVar4 + 0x10);
            if (lVar4 != 0) {
              lVar5 = *plVar3;
              if ((bRam0000000004fa68c1 & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cf67a0,lVar5,0,0);
                bRam0000000004fa68c1 = 1;
              }
              if (lVar4 != 0) {
                lVar6 = *(long *)(lVar4 + 0x10);
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
                }
                uVar7 = 0;
                if (lVar5 != 0) {
                  uVar7 = *(undefined8 *)(lVar5 + 0x10);
                }
                if (pcRam0000000004fa6918 == (code *)0x0) {
                  pcRam0000000004fa6918 = (code *)FUN_02132f40(&UNK_00e42242);
                }
                    /* WARNING: Could not recover jumptable at 0x04473880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000004fa6918)(lVar6,uVar7,0);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

