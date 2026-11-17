/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$MarkShown
void Dino_BusSand_App_Meta_WinStreak__MarkShown (int32_t floor, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$MarkShown
   void Dino_BusSand_App_Meta_WinStreak__MarkShown (int32_t floor, const MethodInfo* method); */

void Dino_BusSand_App_Meta_WinStreak__MarkShown_2294ff4(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  lVar7 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x1c) = param_1;
    lVar7 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
    if (lVar7 != 0) {
      *(undefined4 *)(lVar7 + 0x30) = 0xffffffff;
      puVar2 = PTR_DAT_04cac668;
      if ((bRam0000000004f9c1ec & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb5478);
        FUN_02132f7c(PTR_DAT_04cac668);
        FUN_02132f7c(PTR_DAT_04cb5470);
        bRam0000000004f9c1ec = 1;
      }
      puVar4 = PTR_DAT_04cb5478;
      puVar3 = PTR_DAT_04cb5470;
      uVar5 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      puVar2 = PTR_DAT_04cabaf8;
      uVar6 = *(undefined8 *)puVar3;
      if ((bRam0000000004f9d81f & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cc4908,uVar5,*(undefined8 *)puVar4);
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
          uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
          System_Collections_Generic_List_object____ctor_3a8138c
                    (uVar8,*(undefined8 *)PTR_DAT_04cb4790);
          *(undefined8 *)(lVar7 + 0x130) = uVar8;
          thunk_FUN_02134474(lVar7 + 0x130,uVar8);
        }
        uVar5 = UnityEngine_JsonUtility__ToJson_44323ac(uVar5,0);
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
          uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&uStack_60,*(undefined8 *)puVar3);
          lVar13 = lStack_50;
          if ((uVar9 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
            lVar13 = *(long *)(lVar7 + 0x130);
            lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
            Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar7,0);
            if (lVar7 != 0) {
              *(undefined8 *)(lVar7 + 0x10) = uVar6;
              thunk_FUN_02134474((undefined8 *)(lVar7 + 0x10),uVar6);
              *(undefined8 *)(lVar7 + 0x18) = uVar5;
              thunk_FUN_02134474((undefined8 *)(lVar7 + 0x18),uVar5);
              if (lVar13 != 0) {
                lVar11 = *(long *)(lVar13 + 0x10);
                lVar12 = *(long *)PTR_DAT_04cc4930;
                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                if (lVar11 != 0) {
                  uVar1 = *(uint *)(lVar13 + 0x18);
                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                    plVar10 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar10 = lVar7;
                    thunk_FUN_02134474(plVar10,lVar7);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize_3a81bf4
                              (lVar13,lVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
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
          uVar9 = System_String__op_Equality_46d1108(*(undefined8 *)(lStack_50 + 0x10),uVar6,0);
        } while ((uVar9 & 1) == 0);
        *(undefined8 *)(lVar13 + 0x18) = uVar5;
        thunk_FUN_02134474((undefined8 *)(lVar13 + 0x18),uVar5);
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
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

