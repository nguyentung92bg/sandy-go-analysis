/* IL2CPP: Dino.BusSand.App.CrashContext$$Attach
void Dino_BusSand_App_CrashContext__Attach (Dino_BusSand_App_CrashContext_ISink_o* sink, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.CrashContext$$Attach
   void Dino_BusSand_App_CrashContext__Attach (Dino_BusSand_App_CrashContext_ISink_o* sink, const
   MethodInfo* method); */

void Dino_BusSand_App_CrashContext__Attach_2172d7c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar4 = PTR_DAT_04cacd68;
                    /* catch() { ... } // from try @ 02272d40 with catch @ 02272d98 */
                    /* catch() { ... } // from try @ 02272d50 with catch @ 02272da0 */
  if ((bRam0000000004f9b8b2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04ca9d88);
    FUN_02132f7c(PTR_DAT_04ca9d90);
    FUN_02132f7c(PTR_DAT_04cab6a0);
    FUN_02132f7c(PTR_DAT_04ca9d98);
    FUN_02132f7c(PTR_DAT_04cab6c8);
    FUN_02132f7c(PTR_DAT_04cab6d0);
    FUN_02132f7c(PTR_DAT_04ca9da0);
    FUN_02132f7c(PTR_DAT_04cacd48);
    FUN_02132f7c(PTR_DAT_04cab720);
    FUN_02132f7c(PTR_DAT_04cacbc8);
    FUN_02132f7c(PTR_DAT_04cacbd8);
    FUN_02132f7c(PTR_DAT_04cacd68);
    FUN_02132f7c(PTR_DAT_04cacd70);
    FUN_02132f7c(PTR_DAT_04cacd78);
    FUN_02132f7c(PTR_DAT_04cacd80);
    FUN_02132f7c(PTR_DAT_04cacd88);
    FUN_02132f7c(PTR_DAT_04cacd90);
                    /* try { // try from 02272e94 to 02372eb7 has its CatchHandler @ 02272e94
                       catch() { ... } // from try @ 02272e94 with catch @ 02272e94
                       catch() { ... } // from try @ 02272ec8 with catch @ 02272e94
                       catch() { ... } // from try @ 02272f0c with catch @ 02272e94 */
    FUN_02132f7c(PTR_DAT_04cacd98);
    bRam0000000004f9b8b2 = 1;
  }
  uStack_70 = 0;
  uStack_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
                    /* try { // try from 02272eb8 to 02372ebb has its CatchHandler @ 02272f14 */
  uStack_a0 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
                    /* try { // try from 02272ec0 to 02372ec7 has its CatchHandler @ 02272eec */
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                    /* try { // try from 02272ec8 to 02372f07 has its CatchHandler @ 02272e94 */
  System_Object___ctor_4870e5c(lVar10,0);
  puVar4 = PTR_DAT_04cac450;
  if (lVar10 != 0) {
    plVar15 = (long *)(lVar10 + 0x10);
    *plVar15 = param_1;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02272ec0 with catch @ 02272eec
                        */
    thunk_FUN_02134474(plVar15,param_1);
    lVar11 = *(long *)puVar4;
    lVar14 = *plVar15;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar4;
    }
                    /* try { // try from 02272f08 to 02372f0b has its CatchHandler @ 02272f10 */
                    /* try { // try from 02272f0c to 02372f27 has its CatchHandler @ 02272e94 */
                    /* catch() { ... } // from try @ 02272f08 with catch @ 02272f10 */
    **(long **)(lVar11 + 0xb8) = lVar14;
                    /* catch() { ... } // from try @ 02272eb8 with catch @ 02272f14 */
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar4 + 0xb8),lVar14);
    if (*plVar15 == 0) {
      return;
    }
    lVar11 = *(long *)puVar4;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar4;
    }
    puVar9 = PTR_DAT_04cacd88;
    puVar8 = PTR_DAT_04cacd80;
    puVar7 = PTR_DAT_04cacd78;
    puVar6 = PTR_DAT_04cacd70;
    puVar5 = PTR_DAT_04cacbc8;
    puVar3 = PTR_DAT_04caa458;
    puVar2 = PTR_DAT_04ca9d98;
    lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
    if (lVar11 != 0) {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
                (&uStack_d8,lVar11,*(undefined8 *)PTR_DAT_04ca9d88);
      uStack_70 = uStack_b8;
      puStack_88 = puStack_d0;
      uStack_90 = uStack_d8;
      uStack_78 = uStack_c0;
      uStack_80 = uStack_c8;
      uStack_d8 = 0;
      puStack_d0 = &uStack_90;
      while (uVar12 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                                (&uStack_90,*(undefined8 *)puVar2), (uVar12 & 1) != 0) {
        lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar7);
        System_Object___ctor_4870e5c(lVar11,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        *(long *)(lVar11 + 0x20) = lVar10;
        thunk_FUN_02134474((long *)(lVar11 + 0x20),lVar10);
        *(undefined8 *)(lVar11 + 0x18) = uStack_78;
        *(undefined8 *)(lVar11 + 0x10) = uStack_80;
        thunk_FUN_02134474((undefined8 *)(lVar11 + 0x10),0);
                    /* try { // try from 02273000 to 02373023 has its CatchHandler @ 02273000
                       catch() { ... } // from try @ 02273000 with catch @ 02273000
                       catch() { ... } // from try @ 0227302c with catch @ 02273000 */
        uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
        System_Action___ctor_47b5ed0(uVar13,lVar11,*(undefined8 *)puVar6,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    /* try { // try from 02273024 to 0237302b has its CatchHandler @ 0227303c */
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 0227302c to 02373057 has its CatchHandler @ 02273000 */
        Dino_BusSand_App_CrashContext__Send_2173340(uVar13);
      }
                    /* catch() { ... } // from try @ 02273024 with catch @ 0227303c */
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3645e58
                (&uStack_90,*(undefined8 *)PTR_DAT_04ca9d90);
      while( true ) {
        lVar11 = *(long *)puVar4;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar11 = *(long *)puVar4;
        }
        lVar14 = *(long *)(lVar11 + 0xb8);
        if (*(long *)(lVar14 + 0x10) == 0) goto LAB_022732bc;
        if (*(int *)(*(long *)(lVar14 + 0x10) + 0x20) < 1) break;
        lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar9);
        System_Object___ctor_4870e5c(lVar11,0);
        if (lVar11 == 0) goto LAB_022732bc;
        *(long *)(lVar11 + 0x18) = lVar10;
        thunk_FUN_02134474((long *)(lVar11 + 0x18),lVar10);
        lVar14 = *(long *)puVar4;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar14 = *(long *)puVar4;
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
        if (lVar14 == 0) goto LAB_022732bc;
        uVar13 = System_Collections_Generic_Queue_object___Dequeue_2ce3d64
                           (lVar14,*(undefined8 *)puVar5);
        *(undefined8 *)(lVar11 + 0x10) = uVar13;
        thunk_FUN_02134474();
        uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
        System_Action___ctor_47b5ed0(uVar13,lVar11,*(undefined8 *)puVar8,0);
        Dino_BusSand_App_CrashContext__Send_2173340(uVar13);
      }
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
                    /* catch() { ... } // from try @ 022731b8 with catch @ 02273170 */
        lVar14 = *(long *)(*(long *)puVar4 + 0xb8);
      }
      puVar6 = PTR_DAT_04cacd98;
      puVar5 = PTR_DAT_04cacd90;
      puVar2 = PTR_DAT_04cab6c8;
      if (*(long *)(lVar14 + 0x20) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_d8,*(long *)(lVar14 + 0x20),*(undefined8 *)PTR_DAT_04cab720);
                    /* try { // try from 022731ac to 023731b7 has its CatchHandler @ 022731d8 */
        uStack_a0 = uStack_c8;
                    /* try { // try from 022731b8 to 02373203 has its CatchHandler @ 02273170 */
        puStack_a8 = puStack_d0;
        uStack_b0 = uStack_d8;
        uStack_d8 = 0;
        puStack_d0 = &uStack_b0;
        while (uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                  (&uStack_b0,*(undefined8 *)puVar2), (uVar12 & 1) != 0) {
                    /* catch() { ... } // from try @ 022731ac with catch @ 022731d8 */
          lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
          System_Object___ctor_4870e5c(lVar11,0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          *(long *)(lVar11 + 0x18) = lVar10;
          thunk_FUN_02134474((long *)(lVar11 + 0x18),lVar10);
          *(undefined8 *)(lVar11 + 0x10) = uStack_a0;
          thunk_FUN_02134474();
          uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
          System_Action___ctor_47b5ed0(uVar13,lVar11,*(undefined8 *)puVar5,0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_CrashContext__Send_2173340(uVar13);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_b0,*(undefined8 *)PTR_DAT_04cab6a0);
        lVar10 = *(long *)puVar4;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar10 = *(long *)puVar4;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x20);
        if (lVar10 != 0) {
          iVar1 = *(int *)(lVar10 + 0x18);
          *(undefined4 *)(lVar10 + 0x18) = 0;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                    /* catch() { ... } // from try @ 0227338c with catch @ 02273288 */
          if (iVar1 < 1) {
            return;
          }
          System_Array__Clear_4851dc8(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
          return;
        }
      }
    }
  }
LAB_022732bc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

