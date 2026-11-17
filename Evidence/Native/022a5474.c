/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$BuildTicks
void Dino_BusSand_App_UI_ClimbTowerPanel__BuildTicks (Dino_BusSand_App_UI_ClimbTowerPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$BuildTicks
   void Dino_BusSand_App_UI_ClimbTowerPanel__BuildTicks (Dino_BusSand_App_UI_ClimbTowerPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ClimbTowerPanel__BuildTicks_21a5474(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  int iStack_64;
  
  puVar2 = PTR_DAT_04caeab0;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ba33 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04caeab8);
    FUN_02132f7c(PTR_DAT_04caeac0);
    FUN_02132f7c(PTR_DAT_04caeac8);
    FUN_02132f7c(PTR_DAT_04caeab0);
    bRam0000000004f9ba33 = 1;
  }
  iStack_64 = 0;
  lVar7 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar2,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
  if ((uVar8 & 1) == 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x78);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
    puVar4 = PTR_DAT_04caeac8;
    puVar3 = PTR_DAT_04caeac0;
    puVar2 = PTR_DAT_04cabdb0;
    if ((uVar8 & 1) == 0) {
      lVar11 = *(long *)(param_1 + 0xa8);
      if (lVar11 != 0) {
        if (*(long *)(lVar11 + 0x18) == 0) {
          return;
        }
        iStack_64 = 1;
        do {
          if (*(uint *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          if (*(int *)(lVar11 + ((long)(((ulong)*(uint *)(lVar11 + 0x18) << 0x20) + -0x100000000) >>
                                0x1e) + 0x20) <= iStack_64) {
            return;
          }
          if (*(long *)(param_1 + 0x38) == 0) break;
          uVar8 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsSpecial_2229b68
                            (*(long *)(param_1 + 0x38),iStack_64,0);
          if ((uVar8 & 1) == 0) {
            if (lVar7 == 0) break;
            uVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0);
            uVar13 = *(undefined8 *)(param_1 + 0x78);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            lVar11 = UnityEngine_Object__Instantiate_object__2805310
                               (uVar12,uVar13,0,*(undefined8 *)PTR_DAT_04cad390);
            uVar12 = System_Int32__ToString_482d750(&iStack_64,0);
            uVar12 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04caeab8,uVar12,0);
            if (lVar11 == 0) break;
            UnityEngine_Object__set_name_43c72ec(lVar11,uVar12,0);
            UnityEngine_GameObject__SetActive_43c1408(lVar11,1,0);
            plVar9 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar11,0);
            uVar14 = Dino_BusSand_App_UI_ClimbTowerPanel__HeightOf_21a5838(param_1,iStack_64);
            if (plVar9 == (long *)0x0) break;
            if (*plVar9 != *(long *)puVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_021335a4(plVar9);
            }
            UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0,uVar14,plVar9,0);
            iVar5 = iStack_64;
            if (*(long *)(param_1 + 0x38) == 0) break;
            iVar6 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_Cur_22296c8
                              (*(long *)(param_1 + 0x38),0);
            lVar10 = UnityEngine_GameObject__get_transform_43c1048(lVar11,0);
            if (lVar10 == 0) break;
            lVar10 = UnityEngine_Transform__Find_43d4bec(lVar10,*(undefined8 *)puVar3,0);
            uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
            if ((uVar8 & 1) != 0) {
              if ((lVar10 == 0) ||
                 (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0), lVar10 == 0))
              break;
              UnityEngine_GameObject__SetActive_43c1408(lVar10,iVar5 <= iVar6,0);
            }
            lVar11 = UnityEngine_GameObject__get_transform_43c1048(lVar11,0);
            if (lVar11 == 0) break;
            lVar11 = UnityEngine_Transform__Find_43d4bec(lVar11,*(undefined8 *)puVar4,0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
            if ((uVar8 & 1) != 0) {
              if ((lVar11 == 0) ||
                 (lVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar11,0), lVar11 == 0))
              break;
              UnityEngine_GameObject__SetActive_43c1408(lVar11,iVar6 < iVar5,0);
            }
          }
          lVar11 = *(long *)(param_1 + 0xa8);
          iStack_64 = iStack_64 + 1;
        } while (lVar11 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

