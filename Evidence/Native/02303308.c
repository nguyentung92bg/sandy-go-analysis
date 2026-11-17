/* IL2CPP: Dino.BusSand.App.Meta.BoosterIntro$$Plan
System_Collections_Generic_Dictionary_int__int__o* Dino_BusSand_App_Meta_BoosterIntro__Plan (int32_t level, System_Func_int__bool__o* gifted, System_Func_int__bool__o* taught, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BoosterIntro$$Plan
   System_Collections_Generic_Dictionary_int__int__o* Dino_BusSand_App_Meta_BoosterIntro__Plan
   (int32_t level, System_Func_int__bool__o* gifted, System_Func_int__bool__o* taught, const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_BoosterIntro__Plan_2203308(int param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  puVar5 = PTR_DAT_04cb1cf8;
  puVar4 = PTR_DAT_04cb1cf0;
  puVar3 = PTR_DAT_04cae208;
  puVar2 = PTR_DAT_04cae200;
  if ((bRam0000000004f9bcb5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1c70);
    FUN_02132f7c(PTR_DAT_04cb1cf8);
    FUN_02132f7c(PTR_DAT_04cb1d00);
    FUN_02132f7c(PTR_DAT_04cb1cf0);
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04cae218);
    FUN_02132f7c(PTR_DAT_04cae220);
    FUN_02132f7c(PTR_DAT_04cae208);
    FUN_02132f7c(PTR_DAT_04cae200);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bcb5 = 1;
  }
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_Dictionary_int__int____ctor_342c330(lVar10,*(undefined8 *)puVar5);
  lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_HashSet_int____ctor_37daeb0(lVar11,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)PTR_DAT_04cb1c70 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar12 = Dino_BusSand_App_Meta_BoosterIntro__get_Order_22025b0();
  if (lVar12 != 0) {
    uVar13 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
    if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
      uVar14 = 0;
      do {
        if (uVar13 <= uVar14) goto LAB_02303850;
        if (param_2 == 0) goto LAB_0230384c;
        iVar8 = *(int *)(lVar12 + 0x20 + uVar14 * 4);
        uVar13 = (**(code **)(param_2 + 0x18))
                           (*(undefined8 *)(param_2 + 0x40),iVar8,*(undefined8 *)(param_2 + 0x28));
        if ((uVar13 & 1) == 0) {
          if (param_3 == 0) goto LAB_0230384c;
          uVar13 = (**(code **)(param_3 + 0x18))
                             (*(undefined8 *)(param_3 + 0x40),iVar8,*(undefined8 *)(param_3 + 0x28))
          ;
          if ((uVar13 & 1) != 0) goto LAB_02303484;
        }
        else {
LAB_02303484:
          if (*(int *)(*(long *)PTR_DAT_04cac440 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          iVar6 = Dino_BusSand_App_Meta_Economy__CampaignUnlockLevel_2203854(iVar8);
          if (param_1 < iVar6) {
            if (*(int *)(*(long *)PTR_DAT_04cb1c70 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if (iVar8 - 0x2712U < 4) {
              uVar7 = *(undefined4 *)(&UNK_00e6aae0 + (ulong)(iVar8 - 0x2712U) * 4);
            }
            else {
              uVar7 = 0x7fffffff;
            }
            if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar7 = System_Math__Min_4831118(param_1,uVar7,0);
            if (lVar10 == 0) goto LAB_0230384c;
            System_Collections_Generic_Dictionary_int__int___set_Item_342d0a4
                      (lVar10,iVar8,uVar7,*(undefined8 *)PTR_DAT_04cb1d00);
          }
        }
        uVar13 = (ulong)*(uint *)(lVar12 + 0x18);
        uVar14 = uVar14 + 1;
      } while ((long)uVar14 < (long)(int)*(uint *)(lVar12 + 0x18));
    }
    puVar2 = PTR_DAT_04cae218;
    if (0 < (int)uVar13) {
      uVar14 = 0;
      do {
        if (uVar13 <= uVar14) goto LAB_02303850;
        if (param_2 == 0) goto LAB_0230384c;
        iVar8 = *(int *)(lVar12 + 0x20 + uVar14 * 4);
        uVar13 = (**(code **)(param_2 + 0x18))
                           (*(undefined8 *)(param_2 + 0x40),iVar8,*(undefined8 *)(param_2 + 0x28));
        if ((uVar13 & 1) != 0) {
          if (param_3 == 0) goto LAB_0230384c;
          uVar13 = (**(code **)(param_3 + 0x18))
                             (*(undefined8 *)(param_3 + 0x40),iVar8,*(undefined8 *)(param_3 + 0x28))
          ;
          if ((uVar13 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 023032e4 with catch @ 023035ac
                        */
            if (*(int *)(*(long *)PTR_DAT_04cb1c70 + 0xe4) == 0) {
                    /* try { // try from 023035b0 to 0240363f has its CatchHandler @ 023035b0
                       catch() { ... } // from try @ 023035b0 with catch @ 023035b0
                       catch() { ... } // from try @ 02303680 with catch @ 023035b0 */
              thunk_FUN_0218fdac();
            }
            if (iVar8 - 0x2712U < 4) {
              iVar6 = *(int *)(&UNK_00e6aae0 + (ulong)(iVar8 - 0x2712U) * 4);
            }
            else {
              iVar6 = 0x7fffffff;
            }
            if (iVar6 == param_1) {
              if (*(int *)(*(long *)PTR_DAT_04cac440 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              iVar6 = Dino_BusSand_App_Meta_Economy__CampaignUnlockLevel_2203854(iVar8);
              if (iVar6 != param_1) {
                if (lVar10 == 0) goto LAB_0230384c;
                System_Collections_Generic_Dictionary_int__int___set_Item_342d0a4
                          (lVar10,iVar8,param_1,*(undefined8 *)PTR_DAT_04cb1d00);
              }
              if (lVar11 == 0) goto LAB_0230384c;
              System_Collections_Generic_HashSet_int___Add_37dc0f0
                        (lVar11,param_1,*(undefined8 *)puVar2);
            }
          }
        }
        puVar3 = PTR_DAT_04cae218;
        uVar1 = *(uint *)(lVar12 + 0x18);
        uVar13 = (ulong)uVar1;
        uVar14 = uVar14 + 1;
                    /* try { // try from 02303640 to 0240367f has its CatchHandler @ 02303698 */
      } while ((long)uVar14 < (long)(int)uVar1);
      if (0 < (int)uVar1) {
        uVar14 = 0;
        do {
          if (uVar13 <= uVar14) goto LAB_02303850;
          uVar7 = *(undefined4 *)(lVar12 + 0x20 + uVar14 * 4);
          if (*(int *)(*(long *)PTR_DAT_04cac440 + 0xe4) == 0) {
                    /* try { // try from 02303680 to 024036ab has its CatchHandler @ 023035b0 */
            thunk_FUN_0218fdac();
          }
          iVar8 = Dino_BusSand_App_Meta_Economy__CampaignUnlockLevel_2203854(uVar7);
          if (param_1 < iVar8) {
            if (param_2 == 0) goto LAB_0230384c;
                    /* catch() { ... } // from try @ 02303640 with catch @ 02303698 */
            uVar13 = (**(code **)(param_2 + 0x18))
                               (*(undefined8 *)(param_2 + 0x40),uVar7,
                                *(undefined8 *)(param_2 + 0x28));
            if ((uVar13 & 1) == 0) {
              if (param_3 == 0) goto LAB_0230384c;
                    /* try { // try from 023036c4 to 024036f3 has its CatchHandler @ 02303704 */
              uVar13 = (**(code **)(param_3 + 0x18))
                                 (*(undefined8 *)(param_3 + 0x40),uVar7,
                                  *(undefined8 *)(param_3 + 0x28));
              if ((uVar13 & 1) == 0) {
                if (lVar11 == 0) goto LAB_0230384c;
                System_Collections_Generic_HashSet_int___Add_37dc0f0
                          (lVar11,iVar8,*(undefined8 *)puVar3);
              }
            }
          }
          puVar2 = PTR_DAT_04cae220;
          uVar1 = *(uint *)(lVar12 + 0x18);
          uVar13 = (ulong)uVar1;
          uVar14 = uVar14 + 1;
        } while ((long)uVar14 < (long)(int)uVar1);
        if (0 < (int)uVar1) {
          uVar14 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 023036c4 with catch @ 02303704
                        */
                    /* try { // try from 02303708 to 0240375f has its CatchHandler @ 02303708
                       catch(type#1 @ 00000000) { ... } // from try @ 02303708 with catch @ 02303708
                       catch(type#1 @ 00000000) { ... } // from try @ 023037c4 with catch @ 02303708
                       catch(type#1 @ 00000000) { ... } // from try @ 0230381c with catch @ 02303708
                        */
          iVar8 = param_1;
          do {
            if (uVar13 <= uVar14) {
LAB_02303850:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            if (param_2 == 0) goto LAB_0230384c;
            iVar6 = *(int *)(lVar12 + uVar14 * 4 + 0x20);
            uVar13 = (**(code **)(param_2 + 0x18))
                               (*(undefined8 *)(param_2 + 0x40),iVar6,
                                *(undefined8 *)(param_2 + 0x28));
            if ((uVar13 & 1) == 0) {
              if (param_3 == 0) goto LAB_0230384c;
              uVar13 = (**(code **)(param_3 + 0x18))
                                 (*(undefined8 *)(param_3 + 0x40),iVar6,
                                  *(undefined8 *)(param_3 + 0x28));
              if ((uVar13 & 1) == 0) {
                    /* try { // try from 02303760 to 02403767 has its CatchHandler @ 0230381c */
                if (*(int *)(*(long *)PTR_DAT_04cac440 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                iVar9 = Dino_BusSand_App_Meta_Economy__CampaignUnlockLevel_2203854(iVar6);
                if (iVar9 <= param_1) {
                    /* try { // try from 02303784 to 0240378f has its CatchHandler @ 02303824 */
                  if (*(int *)(*(long *)PTR_DAT_04cb1c70 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                    /* try { // try from 023037a0 to 024037a7 has its CatchHandler @ 0230381c */
                    /* try { // try from 023037b8 to 024037c3 has its CatchHandler @ 02303820 */
                  if ((3 < iVar6 - 0x2712U) ||
                     (param_1 <= *(int *)(&UNK_00e6aae0 + (ulong)(iVar6 - 0x2712U) * 4))) {
                    if (lVar11 == 0) goto LAB_0230384c;
                    iVar8 = iVar8 + -1;
                    do {
                    /* try { // try from 023037c4 to 024037fb has its CatchHandler @ 02303708 */
                      iVar8 = iVar8 + 1;
                      uVar13 = System_Collections_Generic_HashSet_int___Contains_37db5b4
                                         (lVar11,iVar8,*(undefined8 *)puVar2);
                    } while ((uVar13 & 1) != 0);
                    if (iVar9 != iVar8) {
                      if (lVar10 == 0) goto LAB_0230384c;
                    /* try { // try from 023037fc to 0240380f has its CatchHandler @ 02303820 */
                      System_Collections_Generic_Dictionary_int__int___set_Item_342d0a4
                                (lVar10,iVar6,iVar8,*(undefined8 *)PTR_DAT_04cb1d00);
                    }
                    /* try { // try from 02303810 to 0240381b has its CatchHandler @ 0230381c */
                    System_Collections_Generic_HashSet_int___Add_37dc0f0
                              (lVar11,iVar8,*(undefined8 *)PTR_DAT_04cae218);
                  }
                }
              }
            }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02303760 with catch @ 0230381c
                       catch(type#1 @ 00000000) { ... } // from try @ 023037a0 with catch @ 0230381c
                       catch(type#1 @ 00000000) { ... } // from try @ 02303810 with catch @ 0230381c
                       try { // try from 0230381c to 02403837 has its CatchHandler @ 02303708 */
            uVar13 = (ulong)*(uint *)(lVar12 + 0x18);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 023037b8 with catch @ 02303820
                       catch(type#1 @ 00000000) { ... } // from try @ 023037fc with catch @ 02303820
                        */
            uVar14 = uVar14 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02303784 with catch @ 02303824
                        */
          } while ((long)uVar14 < (long)(int)*(uint *)(lVar12 + 0x18));
        }
      }
    }
                    /* try { // try from 02303838 to 0240386f has its CatchHandler @ 02303838
                       catch(type#1 @ 00000000) { ... } // from try @ 02303838 with catch @ 02303838
                       catch(type#1 @ 00000000) { ... } // from try @ 0230387c with catch @ 02303838
                       catch(type#1 @ 00000000) { ... } // from try @ 023038c8 with catch @ 02303838
                        */
    return lVar10;
  }
LAB_0230384c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

