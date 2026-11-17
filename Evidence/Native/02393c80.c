/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$OnBoot
void Dino_BusSand_App_Meta_WinStreak__OnBoot (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$OnBoot
   void Dino_BusSand_App_Meta_WinStreak__OnBoot (const MethodInfo* method); */

void Dino_BusSand_App_Meta_WinStreak__OnBoot_2293c80(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  if ((bRam0000000004f9c1f1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb5490);
    FUN_02132f7c(PTR_DAT_04cb4088);
    bRam0000000004f9c1f1 = 1;
  }
  lVar7 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x34) == '\0') {
      return;
    }
    uVar8 = Dino_BusSand_App_Meta_WinStreak__get_KillIsLoss_2292ac4();
    if (((uVar8 & 1) == 0) ||
       (iVar5 = Dino_BusSand_App_Meta_WinStreak__get_Current_2293690(), iVar5 != 3)) {
      lVar7 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
      if (lVar7 != 0) {
        *(undefined1 *)(lVar7 + 0x34) = 0;
        puVar2 = PTR_DAT_04cac668;
        if ((bRam0000000004f9c1ec & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cb5478);
          FUN_02132f7c(PTR_DAT_04cac668);
          FUN_02132f7c(PTR_DAT_04cb5470);
          bRam0000000004f9c1ec = 1;
        }
        puVar4 = PTR_DAT_04cb5478;
        puVar3 = PTR_DAT_04cb5470;
        uVar11 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        puVar2 = PTR_DAT_04cabaf8;
        uVar6 = *(undefined8 *)puVar3;
        if ((bRam0000000004f9d81f & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cc4908,uVar11,*(undefined8 *)puVar4);
          FUN_02132f7c(PTR_DAT_04cc4910);
          FUN_02132f7c(PTR_DAT_04cc4918);
          FUN_02132f7c(PTR_DAT_04cc4930);
          FUN_02132f7c(PTR_DAT_04cc4920);
          FUN_02132f7c(PTR_DAT_04cb4790);
          FUN_02132f7c(PTR_DAT_04cb4798);
          FUN_02132f7c(PTR_DAT_04cabaf8);
          FUN_02132f7c(PTR_DAT_04cc4938);
          bRam0000000004f9d81f = 1;
        }
        uStack_60 = 0;
        puStack_58 = (undefined8 *)0x0;
        lStack_50 = 0;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b894 == '\0') {
          FUN_02132f7c(PTR_DAT_04cabaf8);
          cRam0000000004f9b894 = '\x01';
        }
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar7 = *(long *)puVar2;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
        if (lVar7 != 0) {
          if (*(long *)(lVar7 + 0x130) == 0) {
            uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
            System_Collections_Generic_List_object____ctor_3a8138c
                      (uVar12,*(undefined8 *)PTR_DAT_04cb4790);
            *(undefined8 *)(lVar7 + 0x130) = uVar12;
            thunk_FUN_02134474(lVar7 + 0x130,uVar12);
          }
          uVar11 = UnityEngine_JsonUtility__ToJson_44323ac(uVar11,0);
          puVar3 = PTR_DAT_04cc4910;
          if (*(long *)(lVar7 + 0x130) == 0) {
LAB_028ef87c:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          System_Collections_Generic_List_object___GetEnumerator_3a825f0
                    (&uStack_78,*(long *)(lVar7 + 0x130),*(undefined8 *)PTR_DAT_04cc4920);
          lStack_50 = lStack_68;
          puStack_58 = puStack_70;
          uStack_60 = uStack_78;
          uStack_78 = 0;
          puStack_70 = &uStack_60;
          do {
            uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_60,*(undefined8 *)puVar3);
            lVar10 = lStack_50;
            if ((uVar8 & 1) == 0) {
              System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                        (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
              lVar10 = *(long *)(lVar7 + 0x130);
              lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
              Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar7,0);
              if (lVar7 != 0) {
                *(undefined8 *)(lVar7 + 0x10) = uVar6;
                thunk_FUN_02134474((undefined8 *)(lVar7 + 0x10),uVar6);
                *(undefined8 *)(lVar7 + 0x18) = uVar11;
                thunk_FUN_02134474((undefined8 *)(lVar7 + 0x18),uVar11);
                if (lVar10 != 0) {
                  lVar13 = *(long *)(lVar10 + 0x10);
                  lVar14 = *(long *)PTR_DAT_04cc4930;
                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                  if (lVar13 != 0) {
                    uVar1 = *(uint *)(lVar10 + 0x18);
                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                      plVar9 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar9 = lVar7;
                      thunk_FUN_02134474(plVar9,lVar7);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                (lVar10,lVar7,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                      ;
                    }
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
                    return;
                  }
                }
              }
              goto LAB_028ef87c;
            }
            if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar8 = System_String__op_Equality_46d1108(*(undefined8 *)(lStack_50 + 0x10),uVar6,0);
          } while ((uVar8 & 1) == 0);
          *(undefined8 *)(lVar10 + 0x18) = uVar11;
          thunk_FUN_02134474((undefined8 *)(lVar10 + 0x18),uVar11);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
        }
        return;
      }
    }
    else {
      plVar9 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
      puVar2 = PTR_DAT_04cb4088;
      if (plVar9 != (long *)0x0) {
        if ((*(long *)PTR_DAT_04cb4088 != 0) &&
           (lVar7 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb4088,*(undefined8 *)(*plVar9 + 0x40)),
           lVar7 == 0)) {
LAB_02393e00:
          uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar11,0);
        }
        if ((int)plVar9[3] != 0) {
          plVar9[4] = *(long *)puVar2;
          thunk_FUN_02134474();
          lVar7 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
          if (lVar7 == 0) goto LAB_02393df8;
          lVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffec);
          if ((lVar7 != 0) &&
             (lVar10 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
          goto LAB_02393e00;
          if ((*(uint *)(plVar9 + 3) & 0xfffffffe) != 0) {
            plVar9[5] = lVar7;
            thunk_FUN_02134474(plVar9 + 5,lVar7);
            if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cb5490,plVar9,0);
            Dino_BusSand_App_Meta_WinStreak__OnLose_2293e0c();
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
  }
LAB_02393df8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

