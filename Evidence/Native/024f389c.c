/* IL2CPP: Dino.BusSand.View.VehicleBatch.Set$$.ctor
void Dino_BusSand_View_VehicleBatch_Set___ctor (Dino_BusSand_View_VehicleBatch_Set_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleBatch.Set$$.ctor
   void Dino_BusSand_View_VehicleBatch_Set___ctor (Dino_BusSand_View_VehicleBatch_Set_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_View_VehicleBatch_Set___ctor_23f389c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_38;
  
  puVar4 = PTR_DAT_04cbdea0;
  puVar3 = PTR_DAT_04cb6990;
  puVar2 = PTR_DAT_04caadd0;
  puVar9 = PTR_DAT_04caa0d8;
  if ((bRam0000000004f9cac2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa0d8);
    FUN_02132f7c(PTR_DAT_04cbdea0);
    FUN_02132f7c(PTR_DAT_04caadd0);
    FUN_02132f7c(PTR_DAT_04cb6990);
    FUN_02132f7c(PTR_DAT_04cbde68);
    FUN_02132f7c(PTR_DAT_04cb6fb8);
    FUN_02132f7c(PTR_DAT_04cb7830);
    bRam0000000004f9cac2 = 1;
  }
  uVar6 = FUN_02133068(*(undefined8 *)puVar4,0x1ff);
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  thunk_FUN_02134474();
  uVar6 = FUN_02133068(*(undefined8 *)puVar3,0x1ff);
  puVar14 = (undefined8 *)(param_1 + 0x18);
  *puVar14 = uVar6;
  thunk_FUN_02134474(puVar14,uVar6);
  uVar6 = FUN_02133068(*(undefined8 *)puVar3,0x1ff);
  puVar12 = (undefined8 *)(param_1 + 0x20);
  *puVar12 = uVar6;
  thunk_FUN_02134474(puVar12,uVar6);
  lVar7 = FUN_02133068(*(undefined8 *)puVar2,0x1ff);
  plVar11 = (long *)(param_1 + 0x28);
  *plVar11 = lVar7;
  thunk_FUN_02134474(plVar11,lVar7);
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar9);
  UnityEngine_MaterialPropertyBlock___ctor_4372b28(lVar7,0);
  plVar15 = (long *)(param_1 + 0x30);
  *plVar15 = lVar7;
  thunk_FUN_02134474(plVar15,lVar7);
  System_Object___ctor_4870e5c(param_1,0);
  if (*plVar15 != 0) {
    UnityEngine_MaterialPropertyBlock__SetVectorArray_4372f78
              (*plVar15,*(undefined8 *)PTR_DAT_04cb6fb8,*puVar14,0);
    if (*plVar15 != 0) {
      UnityEngine_MaterialPropertyBlock__SetVectorArray_4372f78
                (*plVar15,*(undefined8 *)PTR_DAT_04cb7830,*puVar12,0);
      lVar7 = *plVar15;
      if (lVar7 != 0) {
        lVar10 = *plVar11;
        uVar5 = UnityEngine_Shader__PropertyToID_4372cb4
                          (*(undefined8 *)PTR_DAT_04cbde68,*(undefined8 *)PTR_DAT_04cbde68,lVar10,0)
        ;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        iVar1 = *(int *)(lVar10 + 0x18);
        if (lVar10 == 0) {
          thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
          uVar8 = thunk_FUN_0216e89c();
          uVar6 = thunk_FUN_021985a8(PTR_DAT_04cc50a8);
          System_ArgumentNullException___ctor_47afb54(uVar8,uVar6,0);
        }
        else {
          if (*(int *)(lVar10 + 0x18) == 0) {
            thunk_FUN_021985a8(PTR_DAT_04caa3a8);
            uVar8 = thunk_FUN_0216e89c();
            puVar9 = PTR_DAT_04cf6780;
          }
          else {
            if (iVar1 <= *(int *)(lVar10 + 0x18)) {
              if ((bRam0000000004fa6861 & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cf5e50);
                FUN_02132f7c(PTR_DAT_04cf6298);
                FUN_02132f7c(PTR_DAT_04cf5e58);
                bRam0000000004fa6861 = 1;
              }
              uStack_50 = 0;
              uStack_48 = 0;
              if (lVar7 != 0) {
                lVar13 = *(long *)(lVar7 + 0x10);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
                }
                if (lVar10 == 0) {
                  uStack_38 = 0;
                }
                else {
                  uStack_38 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
                }
                uVar6 = System_Span_float___GetPinnableReference_2eac5bc
                                  (&stack0xffffffffffffffc0,*(undefined8 *)PTR_DAT_04cf5e50);
                UnityEngine_Bindings_ManagedSpanWrapper___ctor_43c6140(&uStack_50,uVar6,uStack_38,0)
                ;
                if (pcRam0000000004fa68a0 == (code *)0x0) {
                  pcRam0000000004fa68a0 = (code *)FUN_02132f40(&UNK_00e2f257);
                }
                (*pcRam0000000004fa68a0)(lVar13,uVar5,&uStack_50,iVar1);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            thunk_FUN_021985a8(PTR_DAT_04caa3a8);
            uVar8 = thunk_FUN_0216e89c();
            puVar9 = PTR_DAT_04cf6788;
          }
          uVar6 = thunk_FUN_021985a8(puVar9);
          System_ArgumentException___ctor_47b660c(uVar8,uVar6,0);
        }
        uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf6790);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar8,uVar6);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

