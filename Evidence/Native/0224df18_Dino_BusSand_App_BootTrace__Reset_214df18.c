/* IL2CPP: Dino.BusSand.App.BootTrace$$Reset
void Dino_BusSand_App_BootTrace__Reset (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.BootTrace$$Reset
   void Dino_BusSand_App_BootTrace__Reset (const MethodInfo* method); */

void Dino_BusSand_App_BootTrace__Reset_214df18(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  undefined8 uStack_50;
  undefined8 uStack_48;
  float fStack_24;
  
  puVar3 = PTR_DAT_04cab240;
  if ((bRam0000000004f9b7ac & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab240);
    FUN_02132f7c(PTR_DAT_04cab248);
    FUN_02132f7c(PTR_DAT_04cab250);
    FUN_02132f7c(PTR_DAT_04cab258);
    bRam0000000004f9b7ac = 1;
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  plVar10 = *(long **)(lVar5 + 0xb8);
                    /* try { // try from 0224df84 to 0234df8f has its CatchHandler @ 0224e038 */
  lVar5 = *plVar10;
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
      plVar10 = *(long **)(*(long *)puVar3 + 0xb8);
    }
    puVar4 = PTR_DAT_04cab258;
    if (plVar10[5] != 0) {
                    /* try { // try from 0224dfcc to 0234dfd7 has its CatchHandler @ 0224e024 */
      System_Collections_Generic_Dictionary_object__ValueTuple_int__float____Clear_347e534
                (plVar10[5],*(undefined8 *)PTR_DAT_04cab248);
      lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
      puVar6 = (undefined8 *)(lVar5 + 0x10);
      *puVar6 = 0;
      *(undefined4 *)(lVar5 + 0x18) = 0;
                    /* try { // try from 0224dfec to 0234dff7 has its CatchHandler @ 0224e01c */
      thunk_FUN_02134474(puVar6,0);
      uVar7 = *(undefined8 *)puVar4;
                    /* try { // try from 0224dff8 to 0234e047 has its CatchHandler @ 0224def4 */
      lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
      *(undefined4 *)(lVar5 + 0x30) = 0;
      *(undefined8 *)(lVar5 + 0x1c) = 0;
      *(undefined1 *)(lVar5 + 0x24) = 0;
      puVar3 = PTR_DAT_04cab240;
      if ((bRam0000000004f9b7ad & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cab240);
        bRam0000000004f9b7ad = 1;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar3 = PTR_DAT_04cab240;
      fStack_24 = -1.0;
      if ((bRam0000000004f9b7b2 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cab240);
        FUN_02132f7c(PTR_DAT_04caa370);
        FUN_02132f7c(PTR_DAT_04ca9af8);
        FUN_02132f7c(PTR_DAT_04cab260);
        FUN_02132f7c(PTR_DAT_04caa038);
        FUN_02132f7c(PTR_DAT_04cab268);
        FUN_02132f7c(PTR_DAT_04cab270);
        FUN_02132f7c(PTR_DAT_04cab278);
        FUN_02132f7c(PTR_DAT_04cab280);
        FUN_02132f7c(PTR_DAT_04ca9c30);
        FUN_02132f7c(PTR_DAT_04cab288);
        bRam0000000004f9b7b2 = 1;
      }
      lVar5 = *(long *)puVar3;
      uStack_50 = 0;
      uStack_48 = 0;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar3;
      }
      if (*(char *)(*(long *)(lVar5 + 0xb8) + 0x24) != '\0') {
        return;
      }
      uVar13 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
      lVar5 = *(long *)puVar3;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar3;
      }
      lVar5 = **(long **)(lVar5 + 0xb8);
      uStack_48 = 0;
      uStack_50 = uVar7;
      thunk_FUN_02134474(&uStack_50,uVar7);
      uStack_48 = CONCAT44(0xbf800000,uVar13);
      if (lVar5 != 0) {
        lVar11 = *(long *)(lVar5 + 0x10);
        lVar12 = *(long *)PTR_DAT_04cab260;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar11 != 0) {
          uVar2 = *(uint *)(lVar5 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            lVar11 = lVar11 + (long)(int)uVar2 * 0x10;
            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
            puVar6 = (undefined8 *)(lVar11 + 0x20);
            *puVar6 = uStack_50;
            *(undefined8 *)(lVar11 + 0x28) = uStack_48;
            thunk_FUN_02134474(puVar6,0);
          }
          else {
            System_Collections_Generic_List_BootTrace_Entry___AddWithResize_3b180f0
                      (lVar5,uStack_50,uStack_48,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          puVar6 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
          *puVar6 = uVar7;
          thunk_FUN_02134474(puVar6,uVar7);
          uVar8 = System_String__op_Equality_46d1108(uVar7,*(undefined8 *)PTR_DAT_04cab280,0);
          lVar5 = *(long *)puVar3;
          if ((uVar8 & 1) != 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar5 = *(long *)puVar3;
            }
            lVar11 = *(long *)(lVar5 + 0xb8);
            if (*(int *)(lVar11 + 0x30) == 0) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar5 = *(long *)puVar3;
                lVar11 = *(long *)(lVar5 + 0xb8);
              }
              *(undefined4 *)(lVar11 + 0x30) = 1;
            }
          }
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar8 = Dino_BusSand_App_BootTrace__get_Verbose_214dec8();
          if ((uVar8 & 1) == 0) {
            return;
          }
          lVar5 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,5);
          if (lVar5 != 0) {
            if (*(int *)(lVar5 + 0x18) != 0) {
              *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_04cab268;
              thunk_FUN_02134474();
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar9 = Dino_BusSand_App_BootTrace__F_214eaf0(uVar13);
              if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar5 + 0x28) = uVar9;
                thunk_FUN_02134474((undefined8 *)(lVar5 + 0x28),uVar9);
                puVar3 = PTR_DAT_04cab270;
                if (2 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)PTR_DAT_04cab270;
                  thunk_FUN_02134474((undefined8 *)(lVar5 + 0x30));
                  if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar5 + 0x38) = uVar7;
                    thunk_FUN_02134474((undefined8 *)(lVar5 + 0x38),uVar7);
                    if (0.0 <= fStack_24) {
                      if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      uVar7 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
                      uVar7 = System_Single__ToString_4842760
                                        (&fStack_24,*(undefined8 *)PTR_DAT_04cab288,uVar7,0);
                      uVar7 = System_String__Concat_46d2b84
                                        (*(undefined8 *)puVar3,uVar7,*(undefined8 *)PTR_DAT_04cab278
                                         ,0);
                    }
                    else {
                      uVar7 = *(undefined8 *)PTR_DAT_04ca9c30;
                    }
                    if (4 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined8 *)(lVar5 + 0x40) = uVar7;
                      thunk_FUN_02134474();
                      uVar7 = System_String__Concat_46d31f0(lVar5,0);
                      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
                        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
                      }
                      UnityEngine_Debug__Log_4360fc8(uVar7,0);
                      return;
                    }
                  }
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
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

