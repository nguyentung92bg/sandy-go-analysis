/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide$$FindWandBait
int32_t Dino_BusSand_App_UI_MechanicGuide__FindWandBait (Dino_BusSand_Core_StageEngine_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide$$FindWandBait
   int32_t Dino_BusSand_App_UI_MechanicGuide__FindWandBait (Dino_BusSand_Core_StageEngine_o* e,
   const MethodInfo* method); */

int Dino_BusSand_App_UI_MechanicGuide__FindWandBait_21f9580(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000004f9bc5c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab9d8);
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cab9f8);
    FUN_02132f7c(PTR_DAT_04cb1880);
    bRam0000000004f9bc5c = 1;
  }
  puVar5 = PTR_DAT_04cab9f8;
  puVar4 = PTR_DAT_04cab9e8;
  puVar3 = PTR_DAT_04cab9e0;
  puVar2 = PTR_DAT_04cab9d8;
  uStack_70 = 0;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  if (param_1 == 0) {
    return -1;
  }
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x3c);
    iVar11 = *(int *)(*(long *)(param_1 + 0x18) + 0x14);
    if (iVar11 <= iVar1) {
      iVar1 = iVar11;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      uStack_78 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0(*(long *)(param_1 + 0x28),0);
      Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
                (&uStack_98,&uStack_78,*(undefined8 *)puVar5);
      iVar11 = -1;
      iVar10 = -1;
      lStack_60 = lStack_88;
      uStack_68 = puStack_90;
      uStack_70 = uStack_98;
      uStack_98 = 0;
      iVar12 = 0x7fffffff;
      puStack_90 = &uStack_70;
      do {
        do {
          while( true ) {
            do {
              do {
                do {
                  uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                    (&uStack_70,*(undefined8 *)puVar4);
                  lVar6 = lStack_60;
                  if ((uVar8 & 1) == 0) goto LAB_022f97bc;
                  if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                } while ((*(char *)(lStack_60 + 0x44) != '\0') ||
                        (*(char *)(lStack_60 + 0x4c) == '\0'));
                if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                uVar8 = Dino_BusSand_Core_TruckGrid__CanTap_241c41c
                                  (*(long *)(param_1 + 0x28),lStack_60,0);
              } while ((uVar8 & 1) == 0);
              if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar9 = Dino_BusSand_Core_TruckGrid__ChainOf_241c9f8
                                (*(long *)(param_1 + 0x28),lVar6,0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
            } while (1 < *(int *)(lVar9 + 0x18));
            if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar8 = Dino_BusSand_Core_Road__AnyColorInBottomBand_2416850
                              (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),
                               *(undefined1 *)(lVar6 + 0x4c),0);
            if ((uVar8 & 1) == 0) break;
            uVar8 = Dino_BusSand_Core_StageEngine__IsColorHidden_2423ce8
                              (param_1,*(undefined4 *)(lVar6 + 0x10),0);
            if ((uVar8 & 1) == 0) {
              if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar8 = System_Collections_Generic_Dictionary_int__TruckPayload___TryGetValue_3446abc
                                (*(long *)(param_1 + 0x50),*(undefined4 *)(lVar6 + 0x10),&uStack_80,
                                 *(undefined8 *)puVar2);
              if ((uVar8 & 1) != 0) {
                lVar9 = *(long *)(param_1 + 0x18);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                iVar7 = Dino_BusSand_Core_SandGrid__CountOf_2417b60
                                  (lVar9,*(undefined1 *)(lVar6 + 0x4c),0,*(int *)(lVar9 + 0x10) + -1
                                   ,0,iVar1 + -1,0);
                if ((iVar7 * 4 < uStack_80._4_4_) && (iVar7 < iVar12)) {
                  iVar11 = *(int *)(lVar6 + 0x10);
                  iVar12 = iVar7;
                }
              }
            }
          }
        } while ((-1 < iVar10) &&
                (uVar8 = Dino_BusSand_Core_StageEngine__IsColorHidden_2423ce8
                                   (param_1,*(undefined4 *)(lVar6 + 0x10),0), (uVar8 & 1) != 0));
        iVar10 = *(int *)(lVar6 + 0x10);
        uVar8 = Dino_BusSand_Core_StageEngine__IsColorHidden_2423ce8(param_1,iVar10,0);
      } while ((uVar8 & 1) != 0);
LAB_022f97bc:
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_70,*(undefined8 *)puVar3);
      if (iVar10 < 0) {
        return iVar11;
      }
      return iVar10;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

