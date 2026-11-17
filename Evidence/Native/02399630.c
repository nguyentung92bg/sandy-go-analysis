/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyReplay.Result$$ToString
System_String_o* Dino_BusSand_App_Meta_Journey_JourneyReplay_Result__ToString (Dino_BusSand_App_Meta_Journey_JourneyReplay_Result_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyReplay.Result$$ToString
   System_String_o* Dino_BusSand_App_Meta_Journey_JourneyReplay_Result__ToString
   (Dino_BusSand_App_Meta_Journey_JourneyReplay_Result_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_Journey_JourneyReplay_Result__ToString_2299630(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02399520 with catch @ 02399630
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02399618 with catch @ 02399634
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02399614 with catch @ 02399638
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023994fc with catch @ 0239963c
                        */
  if ((bRam0000000004f9c212 & 1) == 0) {
                    /* try { // try from 02399658 to 0249965b has its CatchHandler @ 0239967c */
                    /* try { // try from 0239965c to 0249967f has its CatchHandler @ 02398ecc */
    FUN_02132f7c(PTR_DAT_04cb5688);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb56c0);
                    /* catch() { ... } // from try @ 02399658 with catch @ 0239967c */
                    /* try { // try from 02399680 to 02499687 has its CatchHandler @ 02399690 */
    FUN_02132f7c(PTR_DAT_04cb56e0);
                    /* try { // try from 02399688 to 02499693 has its CatchHandler @ 02398ecc */
    FUN_02132f7c(PTR_DAT_04cb5768);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02399680 with catch @ 02399690
                        */
    FUN_02132f7c(PTR_DAT_04cab2b8);
    FUN_02132f7c(PTR_DAT_04cb5770);
    FUN_02132f7c(PTR_DAT_04cb5778);
    FUN_02132f7c(PTR_DAT_04cb5780);
    bRam0000000004f9c212 = 1;
  }
  puVar1 = PTR_DAT_04ca9c20;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar9 = System_String__Concat_46c82e0
                      (*(undefined8 *)PTR_DAT_04cb5768,*(undefined8 *)(param_1 + 0x18),0);
  }
  else {
    uVar9 = *(undefined8 *)PTR_DAT_04cb5780;
  }
  plVar3 = (long *)FUN_02133068(*(undefined8 *)puVar1,5);
  puVar1 = PTR_DAT_04ca9ac8;
  uStack_34 = *(undefined4 *)(param_1 + 0x20);
  lVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_02399960:
    uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar9,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_02134474(plVar3 + 4,lVar4);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    lVar4 = FUN_02133100(*(undefined8 *)(puVar1 + 0x68),&uStack_60);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_02399960;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = lVar4;
      thunk_FUN_02134474(plVar3 + 5,lVar4);
      uStack_38 = *(undefined4 *)(param_1 + 0x30);
      lVar4 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_38);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_02399960;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        thunk_FUN_02134474(plVar3 + 6,lVar4);
        uStack_44 = *(undefined4 *)(param_1 + 0x34);
        lVar4 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_44);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_02399960;
        if ((*(uint *)(plVar3 + 3) & 0xfffffffc) != 0) {
          plVar3[7] = lVar4;
          thunk_FUN_02134474(plVar3 + 7,lVar4);
          uStack_48 = *(undefined4 *)(param_1 + 0x38);
          lVar4 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_48);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_02399960;
          puVar2 = PTR_DAT_04cb5770;
          puVar1 = PTR_DAT_04cab2b8;
          if (4 < *(uint *)(plVar3 + 3)) {
            plVar3[8] = lVar4;
            thunk_FUN_02134474(plVar3 + 8,lVar4);
            uVar6 = System_String__Format_46d3570(*(undefined8 *)puVar2,plVar3,0);
            puVar8 = (undefined8 *)PTR_DAT_04cb5778;
            if ((*(char *)(param_1 + 0x3d) == '\0') &&
               (puVar8 = (undefined8 *)PTR_DAT_04cb56c0, *(char *)(param_1 + 0x3c) != '\0')) {
              uStack_50 = *(undefined4 *)(param_1 + 0x40);
              uStack_60 = *(undefined8 *)PTR_DAT_04cb5688;
              uStack_58 = 0xffffffffffffffff;
              uVar7 = System_Enum__ToString_4863070(&uStack_60,0);
              uVar7 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb56e0,uVar7,0);
            }
            else {
              uVar7 = *puVar8;
            }
            System_String__Concat_46d30e8(uVar9,uVar6,uVar7,*(undefined8 *)puVar1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

