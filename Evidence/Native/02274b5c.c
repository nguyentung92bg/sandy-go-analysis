/* IL2CPP: Dino.BusSand.App.Analytics$$Item
void Dino_BusSand_App_Analytics__Item (int32_t id, int64_t delta, System_String_o* reason, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Analytics$$Item
   void Dino_BusSand_App_Analytics__Item (int32_t id, int64_t delta, System_String_o* reason, const
   MethodInfo* method); */

void Dino_BusSand_App_Analytics__Item_2174b5c(int param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  int iStack_44;
  
  iStack_44 = param_1;
  if ((bRam0000000004f9b8cc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cac768);
    FUN_02132f7c(PTR_DAT_04cacf18);
    FUN_02132f7c(PTR_DAT_04cacf20);
    FUN_02132f7c(PTR_DAT_04cac780);
    FUN_02132f7c(PTR_DAT_04cacc78);
    FUN_02132f7c(PTR_DAT_04cacf28);
    FUN_02132f7c(PTR_DAT_04cacf30);
    FUN_02132f7c(PTR_DAT_04cacf38);
    bRam0000000004f9b8cc = 1;
  }
  puVar1 = PTR_DAT_04cabaf8;
  if (param_2 != 0) {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
                    /* catch() { ... } // from try @ 02274cd0 with catch @ 02274c8c */
    if (*(long *)(*(long *)(lVar4 + 0xb8) + 0x10) != 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar4 = Dino_BusSand_App_Meta_Profile__Count_225b150(param_1,0);
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
                    /* try { // try from 02274cc4 to 02374ccf has its CatchHandler @ 02274d74 */
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa200);
      }
                    /* try { // try from 02274cd0 to 02374d93 has its CatchHandler @ 02274c8c */
      lVar8 = -param_2;
      if (-1 < param_2) {
        lVar8 = param_2;
      }
      lVar9 = 3;
      if (param_1 != 0x2711) {
        lVar9 = 1;
      }
      if (param_2 < 1) {
        plVar5 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,10);
        puVar1 = PTR_DAT_04cac768;
        if (plVar5 == (long *)0x0) goto LAB_02275374;
        if ((*(long *)PTR_DAT_04cac768 != 0) &&
           (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac768,*(undefined8 *)(*plVar5 + 0x40)),
           lVar6 == 0)) goto LAB_02275368;
        if ((int)plVar5[3] == 0) goto LAB_02275364;
        plVar5[4] = *(long *)puVar1;
        thunk_FUN_02134474();
        lVar6 = System_Int32__ToString_482d750(&iStack_44,0);
                    /* try { // try from 022750ac to 023750b7 has its CatchHandler @ 02275160 */
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
        goto LAB_02275368;
        if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto LAB_02275364;
        plVar5[5] = lVar6;
        thunk_FUN_02134474(plVar5 + 5,lVar6);
        puVar1 = PTR_DAT_04cacc78;
        if ((*(long *)PTR_DAT_04cacc78 != 0) &&
           (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cacc78,*(undefined8 *)(*plVar5 + 0x40)),
           lVar6 == 0)) goto LAB_02275368;
                    /* try { // try from 022750f4 to 023750ff has its CatchHandler @ 0227514c */
        if (*(uint *)(plVar5 + 3) < 3) goto LAB_02275364;
        plVar5[6] = *(long *)puVar1;
        thunk_FUN_02134474();
        iVar3 = iStack_44;
                    /* try { // try from 02275114 to 0237511f has its CatchHandler @ 02275144 */
        if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
                    /* try { // try from 02275120 to 0237516f has its CatchHandler @ 0227501c */
          thunk_FUN_0218fdac();
        }
        lVar6 = Dino_BusSand_App_Analytics__ItemName_2174510(iVar3,0);
                    /* catch() { ... } // from try @ 02275114 with catch @ 02275144 */
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
        goto LAB_02275368;
                    /* catch() { ... } // from try @ 022750f4 with catch @ 0227514c */
        if ((*(uint *)(plVar5 + 3) & 0xfffffffc) == 0) goto LAB_02275364;
                    /* catch() { ... } // from try @ 022750ac with catch @ 02275160 */
        plVar5[7] = lVar6;
        thunk_FUN_02134474(plVar5 + 7,lVar6);
        puVar1 = PTR_DAT_04cac780;
        if ((*(long *)PTR_DAT_04cac780 != 0) &&
           (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac780,*(undefined8 *)(*plVar5 + 0x40)),
           lVar6 == 0)) goto LAB_02275368;
        if (*(uint *)(plVar5 + 3) < 5) goto LAB_02275364;
        plVar5[8] = *(long *)puVar1;
        thunk_FUN_02134474();
        puVar1 = PTR_DAT_04ca9ac8;
        lStack_58 = lVar9 * lVar8;
        lVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),&lStack_58);
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0))
        goto LAB_02275368;
                    /* catch() { ... } // from try @ 02275230 with catch @ 022751dc */
        if (*(uint *)(plVar5 + 3) < 6) goto LAB_02275364;
        plVar5[9] = lVar8;
        thunk_FUN_02134474(plVar5 + 9,lVar8);
        puVar2 = PTR_DAT_04cacf30;
        if ((*(long *)PTR_DAT_04cacf30 != 0) &&
           (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cacf30,*(undefined8 *)(*plVar5 + 0x40)),
           lVar8 == 0)) goto LAB_02275368;
        if (*(uint *)(plVar5 + 3) < 7) goto LAB_02275364;
                    /* try { // try from 02275228 to 0237522f has its CatchHandler @ 0227527c */
        plVar5[10] = *(long *)puVar2;
        thunk_FUN_02134474();
                    /* try { // try from 02275230 to 0237528f has its CatchHandler @ 022751dc */
        lStack_60 = lVar4 - param_2;
        lVar8 = FUN_02133100(*(undefined8 *)(puVar1 + 0x68),&lStack_60);
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0))
        goto LAB_02275368;
        if ((*(uint *)(plVar5 + 3) & 0xfffffff8) == 0) goto LAB_02275364;
        plVar5[0xb] = lVar8;
        thunk_FUN_02134474(plVar5 + 0xb,lVar8);
        puVar2 = PTR_DAT_04cacf18;
                    /* catch() { ... } // from try @ 02275228 with catch @ 0227527c */
        if ((*(long *)PTR_DAT_04cacf18 != 0) &&
           (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cacf18,*(undefined8 *)(*plVar5 + 0x40)),
           lVar8 == 0)) goto LAB_02275368;
                    /* try { // try from 0227529c to 0237529f has its CatchHandler @ 022752a8 */
        if (*(uint *)(plVar5 + 3) < 9) goto LAB_02275364;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0227529c with catch @ 022752a8
                        */
                    /* try { // try from 022752ac to 023752db has its CatchHandler @ 022752ac
                       catch() { ... } // from try @ 022752ac with catch @ 022752ac
                       catch() { ... } // from try @ 022752e8 with catch @ 022752ac */
        plVar5[0xc] = *(long *)puVar2;
        thunk_FUN_02134474();
        lStack_68 = lVar4;
        lVar4 = FUN_02133100(*(undefined8 *)(puVar1 + 0x68),&lStack_68);
                    /* try { // try from 022752dc to 023752e7 has its CatchHandler @ 02275308 */
        if ((lVar4 != 0) &&
           (lVar8 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
        goto LAB_02275368;
                    /* try { // try from 022752e8 to 02375323 has its CatchHandler @ 022752ac */
        if (*(uint *)(plVar5 + 3) < 10) goto LAB_02275364;
        plVar5[0xd] = lVar4;
        thunk_FUN_02134474(plVar5 + 0xd,lVar4);
        puVar11 = (undefined8 *)PTR_DAT_04cacf20;
      }
      else {
        plVar5 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,0xc);
        puVar1 = PTR_DAT_04cac768;
        if (plVar5 == (long *)0x0) {
LAB_02275374:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if ((*(long *)PTR_DAT_04cac768 != 0) &&
           (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac768,*(undefined8 *)(*plVar5 + 0x40)),
           lVar6 == 0)) {
LAB_02275368:
          uVar10 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar10,0);
        }
        if ((int)plVar5[3] == 0) {
LAB_02275364:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar5[4] = *(long *)puVar1;
        thunk_FUN_02134474();
        lVar6 = System_Int32__ToString_482d750(&iStack_44,0);
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
        goto LAB_02275368;
                    /* catch() { ... } // from try @ 02274cc4 with catch @ 02274d74 */
        if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto LAB_02275364;
        plVar5[5] = lVar6;
        thunk_FUN_02134474(plVar5 + 5,lVar6);
        puVar1 = PTR_DAT_04cacc78;
                    /* try { // try from 02274d94 to 02374db7 has its CatchHandler @ 02274d94
                       catch() { ... } // from try @ 02274d94 with catch @ 02274d94
                       catch() { ... } // from try @ 02274dc0 with catch @ 02274d94 */
        if ((*(long *)PTR_DAT_04cacc78 != 0) &&
           (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cacc78,*(undefined8 *)(*plVar5 + 0x40)),
           lVar6 == 0)) goto LAB_02275368;
        if (*(uint *)(plVar5 + 3) < 3) goto LAB_02275364;
                    /* try { // try from 02274db8 to 02374dbf has its CatchHandler @ 02274dd0 */
        plVar5[6] = *(long *)puVar1;
                    /* try { // try from 02274dc0 to 02374deb has its CatchHandler @ 02274d94 */
        thunk_FUN_02134474();
        iVar3 = iStack_44;
                    /* catch() { ... } // from try @ 02274db8 with catch @ 02274dd0 */
        if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar6 = Dino_BusSand_App_Analytics__ItemName_2174510(iVar3,0);
                    /* try { // try from 02274dec to 02374e0f has its CatchHandler @ 02274dec
                       catch() { ... } // from try @ 02274dec with catch @ 02274dec
                       catch() { ... } // from try @ 02274e18 with catch @ 02274dec */
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
        goto LAB_02275368;
                    /* try { // try from 02274e10 to 02374e17 has its CatchHandler @ 02274e3c */
        if ((*(uint *)(plVar5 + 3) & 0xfffffffc) == 0) goto LAB_02275364;
                    /* try { // try from 02274e18 to 02374e57 has its CatchHandler @ 02274dec */
        plVar5[7] = lVar6;
        thunk_FUN_02134474(plVar5 + 7,lVar6);
        puVar1 = PTR_DAT_04cac780;
                    /* catch() { ... } // from try @ 02274e10 with catch @ 02274e3c */
        if ((*(long *)PTR_DAT_04cac780 != 0) &&
           (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac780,*(undefined8 *)(*plVar5 + 0x40)),
           lVar6 == 0)) goto LAB_02275368;
        if (*(uint *)(plVar5 + 3) < 5) goto LAB_02275364;
        plVar5[8] = *(long *)puVar1;
        thunk_FUN_02134474();
        puVar1 = PTR_DAT_04ca9ac8;
        lStack_58 = lVar9 * lVar8;
        lVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),&lStack_58);
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0))
        goto LAB_02275368;
        if (*(uint *)(plVar5 + 3) < 6) goto LAB_02275364;
        plVar5[9] = lVar8;
        thunk_FUN_02134474(plVar5 + 9,lVar8);
        puVar2 = PTR_DAT_04cacf30;
        if ((*(long *)PTR_DAT_04cacf30 != 0) &&
           (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cacf30,*(undefined8 *)(*plVar5 + 0x40)),
           lVar8 == 0)) goto LAB_02275368;
        if (*(uint *)(plVar5 + 3) < 7) goto LAB_02275364;
        plVar5[10] = *(long *)puVar2;
        thunk_FUN_02134474();
        lStack_60 = lVar4 - param_2;
        lVar8 = FUN_02133100(*(undefined8 *)(puVar1 + 0x68),&lStack_60);
                    /* catch() { ... } // from try @ 02274f4c with catch @ 02274f04 */
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0))
        goto LAB_02275368;
        if ((*(uint *)(plVar5 + 3) & 0xfffffff8) == 0) goto LAB_02275364;
        plVar5[0xb] = lVar8;
        thunk_FUN_02134474(plVar5 + 0xb,lVar8);
        puVar2 = PTR_DAT_04cacf18;
                    /* try { // try from 02274f40 to 02374f4b has its CatchHandler @ 02274f6c */
                    /* try { // try from 02274f4c to 02374f97 has its CatchHandler @ 02274f04 */
        if ((*(long *)PTR_DAT_04cacf18 != 0) &&
           (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cacf18,*(undefined8 *)(*plVar5 + 0x40)),
           lVar8 == 0)) goto LAB_02275368;
        if (*(uint *)(plVar5 + 3) < 9) goto LAB_02275364;
        plVar5[0xc] = *(long *)puVar2;
                    /* catch() { ... } // from try @ 02274f40 with catch @ 02274f6c */
        thunk_FUN_02134474();
        lStack_68 = lVar4;
        lVar4 = FUN_02133100(*(undefined8 *)(puVar1 + 0x68),&lStack_68);
        if ((lVar4 != 0) &&
           (lVar8 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
        goto LAB_02275368;
        if (*(uint *)(plVar5 + 3) < 10) goto LAB_02275364;
        plVar5[0xd] = lVar4;
        thunk_FUN_02134474(plVar5 + 0xd,lVar4);
        puVar1 = PTR_DAT_04cacf38;
        if ((*(long *)PTR_DAT_04cacf38 != 0) &&
           (lVar4 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cacf38,*(undefined8 *)(*plVar5 + 0x40)),
           lVar4 == 0)) goto LAB_02275368;
        if (*(uint *)(plVar5 + 3) < 0xb) goto LAB_02275364;
        plVar5[0xe] = *(long *)puVar1;
        thunk_FUN_02134474();
        lVar4 = Dino_BusSand_App_Analytics__ReasonId_2174690(param_3);
        if ((lVar4 != 0) &&
           (lVar8 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
        goto LAB_02275368;
                    /* catch() { ... } // from try @ 02275120 with catch @ 0227501c */
        if (*(uint *)(plVar5 + 3) < 0xc) goto LAB_02275364;
        plVar5[0xf] = lVar4;
        thunk_FUN_02134474(plVar5 + 0xf,lVar4);
        puVar11 = (undefined8 *)PTR_DAT_04cacf28;
      }
                    /* catch() { ... } // from try @ 022752dc with catch @ 02275308 */
      Dino_BusSand_App_Analytics__Log_216d0c8(*puVar11,plVar5);
      iVar3 = iStack_44;
                    /* try { // try from 02275324 to 0237539b has its CatchHandler @ 02275324
                       catch() { ... } // from try @ 02275324 with catch @ 02275324
                       catch() { ... } // from try @ 022753b0 with catch @ 02275324 */
      if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_GameTracking__Resource_221629c(iVar3,param_2,param_3,iVar3 == 0x3ea,0);
    }
  }
  return;
}

