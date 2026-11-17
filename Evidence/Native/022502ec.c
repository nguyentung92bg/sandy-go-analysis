/* IL2CPP: Dino.BusSand.App.DeviceMemory.Snapshot$$ToString
System_String_o* Dino_BusSand_App_DeviceMemory_Snapshot__ToString (Dino_BusSand_App_DeviceMemory_Snapshot_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.DeviceMemory.Snapshot$$ToString
   System_String_o* Dino_BusSand_App_DeviceMemory_Snapshot__ToString
   (Dino_BusSand_App_DeviceMemory_Snapshot_o __this, const MethodInfo* method); */

long Dino_BusSand_App_DeviceMemory_Snapshot__ToString_21502ec(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  undefined1 auVar14 [16];
  
  if ((bRam0000000004f9b7bb & 1) == 0) {
                    /* try { // try from 02250308 to 02350387 has its CatchHandler @ 0225049c */
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cab420);
    FUN_02132f7c(PTR_DAT_04caad48);
    FUN_02132f7c(PTR_DAT_04cab428);
    FUN_02132f7c(PTR_DAT_04cab430);
    FUN_02132f7c(PTR_DAT_04cab438);
    FUN_02132f7c(PTR_DAT_04cab440);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9b7bb = 1;
  }
  if ((*param_1 < 0) || (param_1[1] < 1)) {
    return *(long *)PTR_DAT_04caad48;
  }
                    /* try { // try from 0225038c to 02350397 has its CatchHandler @ 02250484 */
  uVar5 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,8);
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(uVar5 + 0x18) != 0) {
    *(undefined8 *)(uVar5 + 0x20) = *(undefined8 *)PTR_DAT_04cab438;
    thunk_FUN_02134474((undefined8 *)(uVar5 + 0x20));
    uVar6 = System_Int64__ToString_482e7e4(param_1,0);
    if ((*(uint *)(uVar5 + 0x18) & 0xfffffffe) != 0) {
                    /* try { // try from 022503e8 to 023503eb has its CatchHandler @ 0225049c */
      *(undefined8 *)(uVar5 + 0x28) = uVar6;
      thunk_FUN_02134474((undefined8 *)(uVar5 + 0x28),uVar6);
      if (2 < *(uint *)(uVar5 + 0x18)) {
                    /* try { // try from 02250408 to 0235041b has its CatchHandler @ 02250480 */
        *(undefined8 *)(uVar5 + 0x30) = *(undefined8 *)PTR_DAT_04cab428;
        thunk_FUN_02134474((undefined8 *)(uVar5 + 0x30));
        uVar6 = System_Int64__ToString_482e7e4(param_1 + 1,0);
                    /* try { // try from 0225042c to 0235043f has its CatchHandler @ 0225047c */
        if ((*(uint *)(uVar5 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(uVar5 + 0x38) = uVar6;
                    /* try { // try from 02250440 to 023504d7 has its CatchHandler @ 02250134 */
          thunk_FUN_02134474((undefined8 *)(uVar5 + 0x38),uVar6);
          if (4 < *(uint *)(uVar5 + 0x18)) {
            *(undefined8 *)(uVar5 + 0x40) = *(undefined8 *)PTR_DAT_04cab440;
            thunk_FUN_02134474((undefined8 *)(uVar5 + 0x40));
            uVar6 = System_Int64__ToString_482e7e4(param_1 + 2,0);
                    /* catch() { ... } // from try @ 0225042c with catch @ 0225047c */
                    /* catch() { ... } // from try @ 02250408 with catch @ 02250480 */
                    /* catch() { ... } // from try @ 0225038c with catch @ 02250484 */
            if (5 < *(uint *)(uVar5 + 0x18)) {
                    /* catch() { ... } // from try @ 022501d4 with catch @ 02250488 */
                    /* catch() { ... } // from try @ 022501ac with catch @ 0225048c */
                    /* catch() { ... } // from try @ 02250188 with catch @ 02250490 */
              *(undefined8 *)(uVar5 + 0x48) = uVar6;
                    /* catch() { ... } // from try @ 02250260 with catch @ 02250498
                       catch() { ... } // from try @ 022502a0 with catch @ 02250498 */
              thunk_FUN_02134474((undefined8 *)(uVar5 + 0x48),uVar6);
                    /* catch() { ... } // from try @ 0225022c with catch @ 0225049c
                       catch() { ... } // from try @ 02250308 with catch @ 0225049c
                       catch() { ... } // from try @ 022503e8 with catch @ 0225049c */
                    /* catch() { ... } // from try @ 02250288 with catch @ 022504a4 */
              if (6 < *(uint *)(uVar5 + 0x18)) {
                *(undefined8 *)(uVar5 + 0x50) = *(undefined8 *)PTR_DAT_04cab420;
                thunk_FUN_02134474((undefined8 *)(uVar5 + 0x50));
                if ((*(uint *)(uVar5 + 0x18) & 0xfffffff8) != 0) {
                  puVar1 = (undefined8 *)PTR_DAT_04ca9c30;
                  if ((char)param_1[3] != '\0') {
                    puVar1 = (undefined8 *)PTR_DAT_04cab430;
                  }
                  *(undefined8 *)(uVar5 + 0x58) = *puVar1;
                  thunk_FUN_02134474();
                  puVar4 = PTR_DAT_04caa038;
                  auVar14._8_8_ = 0;
                  auVar14._0_8_ = uVar5;
                  do {
                    lVar10 = auVar14._0_8_;
                    if ((bRam0000000004facb06 & 1) == 0) {
                      FUN_02132f7c(puVar4,auVar14._8_8_);
                      bRam0000000004facb06 = 1;
                    }
                    if (lVar10 == 0) {
                      thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
                      uVar7 = thunk_FUN_0216e89c();
                      uVar6 = thunk_FUN_021985a8(PTR_DAT_04cc50a8);
                      System_ArgumentNullException___ctor_47afb54(uVar7,uVar6,0);
LAB_047d33d4:
                      uVar6 = thunk_FUN_021985a8(PTR_DAT_04d0b420);
                    /* WARNING: Subroutine does not return */
                      FUN_021330e8(uVar7,uVar6);
                    }
                    uVar5 = *(ulong *)(lVar10 + 0x18);
                    if ((int)uVar5 < 2) {
                      if (uVar5 != 0) {
                        if ((int)uVar5 == 0) {
LAB_047d3380:
                    /* WARNING: Subroutine does not return */
                          FUN_0213322c();
                        }
                        if (*(long *)(lVar10 + 0x20) != 0) {
                          return *(long *)(lVar10 + 0x20);
                        }
                      }
LAB_047d334c:
                      return **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
                    }
                    lVar8 = 0;
                    uVar12 = 0;
                    do {
                      lVar9 = *(long *)(lVar10 + lVar8 + 0x20);
                      if (lVar9 != 0) {
                        uVar12 = uVar12 + (long)*(int *)(lVar9 + 0x10);
                      }
                      lVar8 = lVar8 + 8;
                    } while ((uVar5 & 0xffffffff) * 8 - lVar8 != 0);
                    if (0x7fffffff < (long)uVar12) {
                      thunk_FUN_021985a8(PTR_DAT_04cc27f0);
                      uVar7 = thunk_FUN_0216e89c();
                      System_OutOfMemoryException___ctor_4851a74(uVar7,0);
                      goto LAB_047d33d4;
                    }
                    iVar11 = (int)uVar12;
                    if (iVar11 == 0) goto LAB_047d334c;
                    lVar8 = thunk_FUN_0216c29c(uVar12 & 0xffffffff);
                    if ((int)*(ulong *)(lVar10 + 0x18) < 1) {
                      iVar13 = 0;
                    }
                    else {
                      uVar5 = 0;
                      iVar13 = 0;
                      uVar12 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
                      do {
                        if (uVar12 <= uVar5) goto LAB_047d3380;
                        lVar9 = *(long *)(lVar10 + 0x20 + uVar5 * 8);
                        if ((lVar9 != 0) && (iVar2 = *(int *)(lVar9 + 0x10), iVar2 != 0)) {
                          if (iVar11 - iVar13 < iVar2) {
                            iVar13 = -1;
                            break;
                          }
                          System_String__FillStringChecked_46d2a48(lVar8,iVar13);
                          uVar12 = (ulong)*(uint *)(lVar10 + 0x18);
                          iVar13 = iVar2 + iVar13;
                        }
                        uVar5 = uVar5 + 1;
                      } while ((long)uVar5 < (long)(int)uVar12);
                    }
                    if (iVar13 == iVar11) {
                      return lVar8;
                    }
                    auVar14 = System_Array__Clone_485257c(lVar10,0);
                    lVar10 = auVar14._0_8_;
                    auVar3._8_8_ = 0;
                    auVar3._0_8_ = auVar14._8_8_;
                    auVar14 = auVar3 << 0x40;
                    if (lVar10 != 0) {
                      uVar6 = *(undefined8 *)puVar4;
                      auVar14 = thunk_FUN_0216e7a0(lVar10,uVar6);
                      if (auVar14._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_021335a4(lVar10,uVar6);
                      }
                    }
                  } while( true );
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

