/* IL2CPP: Dino.BusSand.App.Iap$$Deliver
void Dino_BusSand_App_Iap__Deliver (int32_t storeItemId, System_Collections_Generic_Dictionary_string__object__o* row, System_String_o* pid, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Iap$$Deliver
   void Dino_BusSand_App_Iap__Deliver (int32_t storeItemId,
   System_Collections_Generic_Dictionary_string__object__o* row, System_String_o* pid, const
   MethodInfo* method); */

void Dino_BusSand_App_Iap__Deliver_217a7d4(int param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  puVar5 = PTR_DAT_04cad1f0;
  if ((bRam0000000004f9b902 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cad218);
    FUN_02132f7c(PTR_DAT_04cad220);
    FUN_02132f7c(PTR_DAT_04cad228);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04cad240);
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04cad248);
    FUN_02132f7c(PTR_DAT_04cad230);
    FUN_02132f7c(PTR_DAT_04cad250);
    FUN_02132f7c(PTR_DAT_04cad258);
    FUN_02132f7c(PTR_DAT_04cad260);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cad268);
    FUN_02132f7c(PTR_DAT_04cad270);
    FUN_02132f7c(PTR_DAT_04cad1f8);
    FUN_02132f7c(PTR_DAT_04cad278);
    FUN_02132f7c(PTR_DAT_04caceb8);
    FUN_02132f7c(PTR_DAT_04cad238);
    FUN_02132f7c(PTR_DAT_04cad280);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9b902 = 1;
  }
  lVar8 = *(long *)puVar5;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  uStack_88 = 0;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar5;
  }
  puVar4 = PTR_DAT_04cabaf8;
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
                    /* try { // try from 0227a958 to 0237a997 has its CatchHandler @ 0227a958
                       catch() { ... } // from try @ 0227a958 with catch @ 0227a958
                       catch() { ... } // from try @ 0227ab40 with catch @ 0227a958 */
  if (lVar11 == 0) {
LAB_0227a994:
    puVar2 = PTR_DAT_04caceb8;
                    /* try { // try from 0227a998 to 0237a9a3 has its CatchHandler @ 0227ab74 */
                    /* try { // try from 0227a9b0 to 0237a9bf has its CatchHandler @ 0227aba0 */
    uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(param_2,*(undefined8 *)PTR_DAT_04cad280,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar4);
    }
    Dino_BusSand_App_Meta_Profile__GrantRewardList_22731bc(uVar10,*(undefined8 *)puVar2,0);
  }
  else {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
    uVar9 = (**(code **)(lVar11 + 0x18))
                      (*(undefined8 *)(lVar11 + 0x40),param_1,*(undefined8 *)(lVar11 + 0x28));
    if ((uVar9 & 1) == 0) goto LAB_0227a994;
  }
                    /* try { // try from 0227a9dc to 0237a9e3 has its CatchHandler @ 0227ab70 */
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0227a9f4 to 0237aa03 has its CatchHandler @ 0227ab6c */
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  puVar2 = PTR_DAT_04cad270;
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar4;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
                    /* try { // try from 0227aa3c to 0237aa43 has its CatchHandler @ 0227ab44 */
  uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(param_2,*(undefined8 *)puVar2,0);
  iVar7 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar10,0,0);
                    /* try { // try from 0227aa4c to 0237aa53 has its CatchHandler @ 0227ab78 */
  if (iVar7 == 9) {
    if (lVar8 == 0) goto LAB_0227ae9c;
    *(undefined1 *)(lVar8 + 0xdc) = 1;
  }
                    /* try { // try from 0227aa70 to 0237aa7b has its CatchHandler @ 0227ab64 */
  uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(param_2,*(undefined8 *)PTR_DAT_04cad238,0);
  iVar7 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar10,0,0);
  if (iVar7 < 1) {
LAB_0227ab58:
    if (lVar8 == 0) goto LAB_0227ae9c;
  }
  else {
    if (lVar8 == 0) goto LAB_0227ae9c;
                    /* try { // try from 0227aa90 to 0237aa93 has its CatchHandler @ 0227ab50 */
    lVar11 = *(long *)(lVar8 + 0x148);
    if (lVar11 == 0) {
                    /* try { // try from 0227aaa0 to 0237aaa7 has its CatchHandler @ 0227ab48 */
      uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cad260);
                    /* try { // try from 0227aab0 to 0237aad3 has its CatchHandler @ 0227ab4c */
      System_Collections_Generic_List_object____ctor_3a8138c(uVar10,*(undefined8 *)PTR_DAT_04cad258)
      ;
      *(undefined8 *)(lVar8 + 0x148) = uVar10;
      thunk_FUN_02134474(lVar8 + 0x148,uVar10);
      lVar11 = *(long *)(lVar8 + 0x148);
      if (lVar11 == 0) goto LAB_0227ae9c;
    }
    puVar3 = PTR_DAT_04cad220;
    puVar2 = PTR_DAT_04cad218;
                    /* try { // try from 0227aae0 to 0237aae7 has its CatchHandler @ 0227ab40 */
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_a8,lVar11,*(undefined8 *)PTR_DAT_04cad230);
    lStack_70 = lStack_98;
    puStack_78 = puStack_a0;
    uStack_80 = uStack_a8;
    uStack_a8 = 0;
    lVar11 = 0;
    puStack_a0 = &uStack_80;
    while (lVar12 = lVar11,
          uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&uStack_80,*(undefined8 *)puVar3), (uVar9 & 1) != 0) {
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar11 = lStack_70;
      if (*(int *)(lStack_70 + 0x10) != param_1) {
        lVar11 = lVar12;
      }
    }
                    /* catch() { ... } // from try @ 0227aae0 with catch @ 0227ab40
                       try { // try from 0227ab40 to 0237abb3 has its CatchHandler @ 0227a958 */
                    /* catch() { ... } // from try @ 0227aa3c with catch @ 0227ab44 */
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_80,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 0227aaa0 with catch @ 0227ab48 */
    if (lVar12 != 0) {
                    /* catch() { ... } // from try @ 0227aab0 with catch @ 0227ab4c */
                    /* catch() { ... } // from try @ 0227aa90 with catch @ 0227ab50 */
      *(long *)(lVar12 + 0x18) = *(long *)(lVar12 + 0x18) + 1;
      goto LAB_0227ab58;
    }
    lVar12 = *(long *)(lVar8 + 0x148);
    lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cad240);
    Dino_BusSand_App_Meta_IntPair___ctor_226f05c(lVar11,0);
    if (lVar11 == 0) goto LAB_0227ae9c;
    *(int *)(lVar11 + 0x10) = param_1;
    *(undefined8 *)(lVar11 + 0x18) = 1;
    if (lVar12 == 0) goto LAB_0227ae9c;
    lVar14 = *(long *)(lVar12 + 0x10);
    lVar15 = *(long *)PTR_DAT_04cad248;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_0227ae9c;
    uVar1 = *(uint *)(lVar12 + 0x18);
    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
      plVar13 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
      *plVar13 = lVar11;
      thunk_FUN_02134474(plVar13,lVar11);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (lVar12,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
  }
  dVar17 = *(double *)(lVar8 + 0x140);
                    /* catch() { ... } // from try @ 0227aa70 with catch @ 0227ab64 */
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0227a9f4 with catch @ 0227ab6c */
    thunk_FUN_0218fdac();
  }
                    /* catch() { ... } // from try @ 0227a9dc with catch @ 0227ab70 */
                    /* catch() { ... } // from try @ 0227a998 with catch @ 0227ab74 */
  dVar16 = (double)Dino_BusSand_App_Iap__PriceUsd_217a220(param_1);
                    /* catch() { ... } // from try @ 0227aa4c with catch @ 0227ab78
                       catch() { ... } // from try @ 0227ab38 with catch @ 0227ab78 */
  lVar11 = *(long *)(lVar8 + 0x110);
  *(double *)(lVar8 + 0x140) = dVar17 + dVar16;
  if (lVar11 != 0) {
    lVar12 = *(long *)(lVar11 + 0x10);
    lVar14 = *(long *)PTR_DAT_04cab718;
                    /* catch() { ... } // from try @ 0227a9b0 with catch @ 0227aba0 */
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar12 != 0) {
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
        plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        *plVar13 = param_3;
        thunk_FUN_02134474(plVar13,param_3);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                  (lVar11,param_3,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                  );
      }
      if (*(long *)(lVar8 + 0x118) != 0) {
        System_Collections_Generic_List_object___Remove_3a830f8
                  (*(long *)(lVar8 + 0x118),param_3,*(undefined8 *)PTR_DAT_04cad250);
      }
      puVar2 = PTR_DAT_04ca9c20;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_Profile__Save_226c548(0);
      plVar13 = (long *)FUN_02133068(*(undefined8 *)puVar2,4);
      puVar2 = PTR_DAT_04cad268;
      if (plVar13 != (long *)0x0) {
        if ((*(long *)PTR_DAT_04cad268 != 0) &&
           (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad268,*(undefined8 *)(*plVar13 + 0x40)),
           lVar8 == 0)) {
LAB_0227aea4:
          uVar10 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar10,0);
        }
        if ((int)plVar13[3] != 0) {
          plVar13[4] = *(long *)puVar2;
          thunk_FUN_02134474();
          if ((param_3 != 0) &&
             (lVar8 = thunk_FUN_0216e7a0(param_3,*(undefined8 *)(*plVar13 + 0x40)), lVar8 == 0))
          goto LAB_0227aea4;
          puVar2 = PTR_DAT_04cad1f8;
          if ((*(uint *)(plVar13 + 3) & 0xfffffffe) != 0) {
            plVar13[5] = param_3;
            thunk_FUN_02134474(plVar13 + 5,param_3);
            if ((*(long *)puVar2 != 0) &&
               (lVar8 = thunk_FUN_0216e7a0(*(long *)puVar2,*(undefined8 *)(*plVar13 + 0x40)),
               lVar8 == 0)) goto LAB_0227aea4;
            puVar3 = PTR_DAT_04ca9c30;
            if (2 < *(uint *)(plVar13 + 3)) {
              plVar13[6] = *(long *)puVar2;
              thunk_FUN_02134474();
              uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(param_2,*(undefined8 *)puVar2,0);
              lVar8 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar10,*(undefined8 *)puVar3,0);
              if ((lVar8 != 0) &&
                 (lVar11 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar13 + 0x40)), lVar11 == 0))
              goto LAB_0227aea4;
              puVar6 = PTR_DAT_04cad278;
              puVar3 = PTR_DAT_04cac5c0;
              puVar2 = PTR_DAT_04cac498;
              if ((*(uint *)(plVar13 + 3) & 0xfffffffc) != 0) {
                plVar13[7] = lVar8;
                thunk_FUN_02134474(plVar13 + 7,lVar8);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)puVar6,plVar13);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                Dino_BusSand_App_Meta_GameTracking__IapSuccess_2218850(param_1,0);
                lVar8 = *(long *)puVar5;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar8 = *(long *)puVar5;
                }
                lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
                if (lVar8 != 0) {
                  (**(code **)(lVar8 + 0x18))
                            (*(undefined8 *)(lVar8 + 0x40),param_1,*(undefined8 *)(lVar8 + 0x28));
                }
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                Dino_BusSand_App_Meta_Profile__Save_226c548(0);
                return;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
  }
LAB_0227ae9c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

