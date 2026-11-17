/* IL2CPP: Dino.BusSand.App.Iap$$DeliverUnclaimed
bool Dino_BusSand_App_Iap__DeliverUnclaimed (System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0227b694) */
/* IL2CPP: Dino.BusSand.App.Iap$$DeliverUnclaimed
   bool Dino_BusSand_App_Iap__DeliverUnclaimed (System_String_o* productId, const MethodInfo*
   method); */

undefined4 Dino_BusSand_App_Iap__DeliverUnclaimed_217b060(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  int *piVar15;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9b903 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cad288);
    FUN_02132f7c(PTR_DAT_04cad290);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04cad298);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cad268);
    FUN_02132f7c(PTR_DAT_04cad2a0);
    FUN_02132f7c(PTR_DAT_04cad270);
    FUN_02132f7c(PTR_DAT_04cad2a8);
    FUN_02132f7c(PTR_DAT_04cad2b0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cad2b8);
    FUN_02132f7c(PTR_DAT_04cad200);
    FUN_02132f7c(PTR_DAT_04cad2c0);
    FUN_02132f7c(PTR_DAT_04cac1c8);
    bRam0000000004f9b903 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
                    /* try { // try from 0227b1b0 to 0237b1f3 has its CatchHandler @ 0227b1b0
                       catch() { ... } // from try @ 0227b1b0 with catch @ 0227b1b0
                       catch() { ... } // from try @ 0227b220 with catch @ 0227b1b0
                       catch() { ... } // from try @ 0227b274 with catch @ 0227b1b0 */
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar1;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar7 == 0) {
    return 0;
  }
  uVar8 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  if ((uVar8 & 1) != 0) {
    return 0;
  }
                    /* try { // try from 0227b1f4 to 0237b21f has its CatchHandler @ 0227b280 */
  if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar9 = (long *)Dino_BusSand_App_Tables__Rows_215eefc(*(undefined8 *)PTR_DAT_04cad200,0);
                    /* try { // try from 0227b220 to 0237b247 has its CatchHandler @ 0227b1b0 */
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0227b690 to 0237b6ab has its CatchHandler @ 0227b9d4 */
    FUN_02133224();
  }
  lVar14 = *plVar9;
  uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar8 != 0) {
    piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
                    /* try { // try from 0227b248 to 0237b273 has its CatchHandler @ 0227b284 */
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04cad288) {
                    /* try { // try from 0227b274 to 0237b29f has its CatchHandler @ 0227b1b0 */
        puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_0227b27c;
      }
      uVar8 = uVar8 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar8 != 0);
  }
  puVar10 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)PTR_DAT_04cad288,0);
LAB_0227b27c:
                    /* catch() { ... } // from try @ 0227b1f4 with catch @ 0227b280 */
                    /* catch() { ... } // from try @ 0227b248 with catch @ 0227b284 */
  plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
  puVar4 = PTR_DAT_04cad2a8;
  puVar3 = PTR_DAT_04cad290;
  puVar2 = PTR_DAT_04ca9c30;
  puVar1 = PTR_DAT_04ca9c08;
                    /* catch() { ... } // from try @ 0227b9a0 with catch @ 0227b2a0 */
  do {
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar14 = *plVar9;
                    /* try { // try from 0227b2c0 to 0237b2c3 has its CatchHandler @ 0227b9e4 */
    uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
                    /* try { // try from 0227b2d4 to 0237b383 has its CatchHandler @ 0227ba00 */
        if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0227b308;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)puVar1,0);
LAB_0227b308:
    uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    if ((uVar8 & 1) == 0) {
      uVar5 = 0;
      iVar6 = 0xb;
      goto LAB_0227b568;
    }
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar14 = *plVar9;
    uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0227b36c;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)puVar3,0);
LAB_0227b36c:
    uVar11 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    uVar12 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar11,*(undefined8 *)puVar4,0);
    uVar12 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar12,*(undefined8 *)puVar2,0);
                    /* try { // try from 0227b398 to 0237b3af has its CatchHandler @ 0227b9e0 */
    uVar8 = System_String__op_Inequality_46d110c(uVar12,param_1,0);
  } while ((uVar8 & 1) != 0);
  uVar12 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar11,*(undefined8 *)PTR_DAT_04cac1c8,0);
                    /* try { // try from 0227b3c4 to 0237b43f has its CatchHandler @ 0227b9e8 */
  uVar5 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar12,0,0);
  uVar12 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar11,*(undefined8 *)PTR_DAT_04cad270,0);
  iVar6 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar12,0,0);
  puVar1 = PTR_DAT_04cad298;
  if (iVar6 == 9) {
    if (*(long *)(lVar7 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar8 = System_Collections_Generic_List_object___Contains_3a81f90
                      (*(long *)(lVar7 + 0x110),param_1,*(undefined8 *)PTR_DAT_04cad298);
    if ((uVar8 & 1) != 0) goto LAB_0227b54c;
    if ((*(long *)(lVar7 + 0x118) == 0) ||
       (uVar8 = System_Collections_Generic_List_object___Contains_3a81f90
                          (*(long *)(lVar7 + 0x118),param_1,*(undefined8 *)puVar1), (uVar8 & 1) == 0
       )) {
      if (*(char *)(lVar7 + 0xdc) == '\0') {
        if (*(int *)(*(long *)PTR_DAT_04cad1f0 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Iap__DeliverRestored_217b758(uVar5,uVar11,param_1);
      }
      goto LAB_0227b54c;
    }
  }
  uVar12 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cad2b0,param_1,0);
  if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0227b468 to 0237b46f has its CatchHandler @ 0227ba00 */
  UnityEngine_Debug__Log_4360fc8(uVar12,0);
  plVar13 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
  puVar1 = PTR_DAT_04cad268;
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(long *)PTR_DAT_04cad268 != 0) &&
     (lVar7 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad268,*(undefined8 *)(*plVar13 + 0x40)),
     lVar7 == 0)) {
    uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar11,0);
  }
  if ((int)plVar13[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  plVar13[4] = *(long *)puVar1;
  thunk_FUN_02134474();
  if ((param_1 != 0) &&
     (lVar7 = thunk_FUN_0216e7a0(param_1,*(undefined8 *)(*plVar13 + 0x40)), lVar7 == 0)) {
    uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar11,0);
  }
                    /* try { // try from 0227b4e4 to 0237b4ff has its CatchHandler @ 0227b9dc */
  if ((*(uint *)(plVar13 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  plVar13[5] = param_1;
  thunk_FUN_02134474(plVar13 + 5,param_1);
  if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cad2c0,plVar13);
  if (*(int *)(*(long *)PTR_DAT_04cad1f0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Iap__Deliver_217a7d4(uVar5,uVar11,param_1);
LAB_0227b54c:
  uVar5 = 1;
  iVar6 = 8;
LAB_0227b568:
                    /* try { // try from 0227b56c to 0237b577 has its CatchHandler @ 0227b9c0 */
  if (plVar9 != (long *)0x0) {
    lVar7 = *plVar9;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04ca9b30) {
          puVar10 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0227b5c8;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)PTR_DAT_04ca9b30,0);
LAB_0227b5c8:
                    /* try { // try from 0227b5d0 to 0237b5eb has its CatchHandler @ 0227b9d8 */
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  if ((iVar6 != 0xb) && (iVar6 != 0)) {
    return uVar5;
  }
  uVar11 = System_String__Concat_46d2b84
                     (*(undefined8 *)PTR_DAT_04cad2b8,param_1,*(undefined8 *)PTR_DAT_04cad2a0,0);
  if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
                    /* try { // try from 0227b620 to 0237b623 has its CatchHandler @ 0227b9e4 */
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
  }
  UnityEngine_Debug__LogWarning_4357a30(uVar11,0);
                    /* try { // try from 0227b648 to 0237b65f has its CatchHandler @ 0227b9c4 */
  return 0;
}

