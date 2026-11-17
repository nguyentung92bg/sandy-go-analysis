/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$SegmentProgress
float Dino_BusSand_App_Meta_WinStreak__SegmentProgress (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$SegmentProgress
   float Dino_BusSand_App_Meta_WinStreak__SegmentProgress (const MethodInfo* method); */

float Dino_BusSand_App_Meta_WinStreak__SegmentProgress_22950c0(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000004f9c1f9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caffc0);
    FUN_02132f7c(PTR_DAT_04caffc8);
    FUN_02132f7c(PTR_DAT_04caffd0);
    FUN_02132f7c(PTR_DAT_04caffd8);
    bRam0000000004f9c1f9 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  lVar6 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
  if (lVar6 != 0) {
    iVar4 = Dino_BusSand_App_Meta_WinStreak__LastCheckpointFloor_22943dc
                      (*(undefined4 *)(lVar6 + 0x18));
    iVar5 = Dino_BusSand_App_Meta_WinStreak__get_TopFloor_2293148();
    lVar6 = Dino_BusSand_App_Meta_WinStreak__get_Checkpoints_2292b2c();
    puVar3 = PTR_DAT_04caffc8;
    puVar2 = PTR_DAT_04caffc0;
    if (lVar6 != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_58,lVar6,*(undefined8 *)PTR_DAT_04caffd8);
      do {
        uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&uStack_58,*(undefined8 *)puVar3);
        lVar6 = lStack_48;
        if ((uVar7 & 1) == 0) goto LAB_023951a4;
        if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        iVar1 = *(int *)(lStack_48 + 0x14);
        lVar8 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      } while (iVar1 <= *(int *)(lVar8 + 0x18));
      iVar5 = *(int *)(lVar6 + 0x14);
LAB_023951a4:
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_58,*(undefined8 *)puVar2);
      fVar10 = 1.0;
      if (iVar5 - iVar4 != 0 && iVar4 <= iVar5) {
        lVar6 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0x3f800000);
        if (lVar6 == 0) goto LAB_02395210;
        fVar9 = (float)(*(int *)(lVar6 + 0x18) - iVar4) / (float)(iVar5 - iVar4);
        fVar11 = 1.0;
        if (fVar9 <= 1.0) {
          fVar11 = fVar9;
        }
        fVar10 = 0.0;
        if (0.0 <= fVar9) {
          fVar10 = fVar11;
        }
      }
      return fVar10;
    }
  }
LAB_02395210:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

