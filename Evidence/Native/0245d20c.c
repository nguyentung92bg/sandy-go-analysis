/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$MarkTutorialsSeen
void Dino_BusSand_Cheat_CheatManager__MarkTutorialsSeen (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$MarkTutorialsSeen
   void Dino_BusSand_Cheat_CheatManager__MarkTutorialsSeen (const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__MarkTutorialsSeen_235d20c(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uStack_58;
  
  puVar4 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c734 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba458);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cba4a8);
    FUN_02132f7c(PTR_DAT_04cb1980);
    FUN_02132f7c(PTR_DAT_04cad8b0);
    FUN_02132f7c(PTR_DAT_04cb1d18);
    bRam0000000004f9c734 = 1;
  }
  uStack_58 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  puVar6 = PTR_DAT_04cba458;
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar4;
  }
  lVar10 = *(long *)puVar6;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar10);
    lVar10 = *(long *)puVar6;
  }
  puVar5 = PTR_DAT_04cad860;
  puVar3 = PTR_DAT_04caa160;
  lVar10 = **(long **)(lVar10 + 0xb8);
  if (lVar10 != 0) {
    if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
      uVar14 = 0;
      uVar11 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      do {
        if (uVar11 <= uVar14) goto LAB_0245d600;
        if ((lVar7 == 0) || (*(long *)(lVar7 + 0x48) == 0)) goto LAB_0245d604;
        uVar1 = *(undefined4 *)(lVar10 + 0x20 + uVar14 * 4);
        uVar11 = System_Collections_Generic_List_int___Contains_3a2c3ec
                           (*(long *)(lVar7 + 0x48),uVar1,*(undefined8 *)puVar5);
        if ((uVar11 & 1) == 0) {
          lVar8 = *(long *)(lVar7 + 0x48);
          if (lVar8 == 0) goto LAB_0245d604;
          lVar12 = *(long *)(lVar8 + 0x10);
          lVar13 = *(long *)puVar3;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_0245d604;
          uVar2 = *(uint *)(lVar8 + 0x18);
          if (uVar2 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar12 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_3a2c06c
                      (lVar8,uVar1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar11 = (ulong)*(uint *)(lVar10 + 0x18);
        uVar14 = uVar14 + 1;
      } while ((long)uVar14 < (long)(int)*(uint *)(lVar10 + 0x18));
    }
    lVar7 = *(long *)puVar6;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar6;
    }
    puVar3 = PTR_DAT_04cb1980;
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar7 != 0) {
      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
        uVar14 = 0;
        uVar11 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        do {
          if (uVar11 <= uVar14) goto LAB_0245d600;
          uStack_58 = CONCAT44(*(undefined4 *)(lVar7 + 0x20 + uVar14 * 4),(undefined4)uStack_58);
          uVar9 = System_Int32__ToString_482d750((long)&uStack_58 + 4,0);
          uVar9 = System_String__Concat_46c82e0(*(undefined8 *)puVar3,uVar9,0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar4);
          }
          Dino_BusSand_App_Meta_Profile__SetFlag_227375c(uVar9,1,0);
          uVar11 = (ulong)*(uint *)(lVar7 + 0x18);
          uVar14 = uVar14 + 1;
        } while ((long)uVar14 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
      lVar7 = *(long *)puVar6;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar6;
      }
      puVar3 = PTR_DAT_04cb1d18;
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar7 != 0) {
        if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
          uVar14 = 0;
          uVar11 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
          do {
            if (uVar11 <= uVar14) goto LAB_0245d600;
            uStack_58 = CONCAT44(uStack_58._4_4_,*(undefined4 *)(lVar7 + 0x20 + uVar14 * 4));
            uVar9 = System_Int32__ToString_482d750(&uStack_58,0);
            uVar9 = System_String__Concat_46c82e0(*(undefined8 *)puVar3,uVar9,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            Dino_BusSand_App_Meta_Profile__SetFlag_227375c(uVar9,1,0);
            uVar11 = (ulong)*(uint *)(lVar7 + 0x18);
            uVar14 = uVar14 + 1;
          } while ((long)uVar14 < (long)(int)*(uint *)(lVar7 + 0x18));
        }
        puVar3 = PTR_DAT_04cad8b0;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_Profile__SetFlag_227375c(*(undefined8 *)puVar3,1,0);
        lVar7 = *(long *)puVar6;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar7 = *(long *)puVar6;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
        if (lVar7 != 0) {
          if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
            uVar14 = 0;
            uVar11 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
            do {
              if (uVar11 <= uVar14) {
LAB_0245d600:
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              Dino_BusSand_App_Meta_SystemOpen__MarkGuided_224333c
                        (*(undefined4 *)(lVar7 + 0x20 + uVar14 * 4),0);
              uVar11 = (ulong)*(uint *)(lVar7 + 0x18);
              uVar14 = uVar14 + 1;
            } while ((long)uVar14 < (long)(int)*(uint *)(lVar7 + 0x18));
          }
                    /* try { // try from 0245d5b0 to 0255d83f has its CatchHandler @ 0245d5b0
                       catch() { ... } // from try @ 0245d5b0 with catch @ 0245d5b0
                       catch() { ... } // from try @ 0245db70 with catch @ 0245d5b0
                       catch() { ... } // from try @ 0245dc14 with catch @ 0245d5b0
                       catch() { ... } // from try @ 0245dcd4 with catch @ 0245d5b0 */
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          puVar4 = PTR_DAT_04cba4a8;
          Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_Cheat_CheatManager__RefreshHud_235d608();
          Dino_BusSand_Cheat_CheatManager__Log_235c924(*(undefined8 *)puVar4);
          return;
        }
      }
    }
  }
LAB_0245d604:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

