/* IL2CPP: Dino.BusSand.App.Meta.Profile$$PlayedDay
Dino_BusSand_App_Meta_IntPair_o* Dino_BusSand_App_Meta_Profile__PlayedDay (int64_t day, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$PlayedDay
   Dino_BusSand_App_Meta_IntPair_o* Dino_BusSand_App_Meta_Profile__PlayedDay (int64_t day, const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_Profile__PlayedDay_2271b0c(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  
  puVar2 = PTR_DAT_04cabaf8;
                    /* try { // try from 02371b1c to 02471fbf has its CatchHandler @ 02371a00 */
  if ((bRam0000000004f9c0f4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad218);
    FUN_02132f7c(PTR_DAT_04cad220);
    FUN_02132f7c(PTR_DAT_04cad228);
    FUN_02132f7c(PTR_DAT_04cad240);
    FUN_02132f7c(PTR_DAT_04cad248);
    FUN_02132f7c(PTR_DAT_04cad230);
    FUN_02132f7c(PTR_DAT_04cb4800);
    FUN_02132f7c(PTR_DAT_04cad258);
    FUN_02132f7c(PTR_DAT_04cb1cc8);
    FUN_02132f7c(PTR_DAT_04cad260);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c0f4 = 1;
  }
  uStack_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar2;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  if (lVar11 != 0) {
    if (*(long *)(lVar11 + 0x170) == 0) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar2;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
      uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cad260);
      System_Collections_Generic_List_object____ctor_3a8138c(uVar9,*(undefined8 *)PTR_DAT_04cad258);
      if (lVar8 == 0) goto LAB_02371f3c;
      *(undefined8 *)(lVar8 + 0x170) = uVar9;
      thunk_FUN_02134474(lVar8 + 0x170,uVar9);
      lVar8 = *(long *)puVar2;
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar2;
    }
    puVar7 = PTR_DAT_04cb4800;
    puVar6 = PTR_DAT_04cad248;
    puVar5 = PTR_DAT_04cad240;
    puVar4 = PTR_DAT_04cad220;
    puVar3 = PTR_DAT_04cad218;
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
    if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x170), lVar8 != 0)) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_88,lVar8,*(undefined8 *)PTR_DAT_04cad230);
      lStack_60 = lStack_78;
      puStack_68 = puStack_80;
      uStack_70 = uStack_88;
      uStack_88 = 0;
      puStack_80 = &uStack_70;
      while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&uStack_70,*(undefined8 *)puVar4), lVar8 = lStack_60,
            (uVar10 & 1) != 0) {
        if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(int *)(lStack_60 + 0x10) == param_1) {
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_70,*(undefined8 *)puVar3);
          return lVar8;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_70,*(undefined8 *)puVar3);
      lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
      System_Object___ctor_4870e5c(lVar8,0);
      if (lVar8 != 0) {
        lVar11 = *(long *)puVar2;
        *(int *)(lVar8 + 0x10) = param_1;
        *(undefined8 *)(lVar8 + 0x18) = 0;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b894 == '\0') {
          FUN_02132f7c(PTR_DAT_04cabaf8);
          cRam0000000004f9b894 = '\x01';
        }
        lVar11 = *(long *)puVar2;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar11 = *(long *)puVar2;
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
        if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x170), lVar11 != 0)) {
          lVar12 = *(long *)(lVar11 + 0x10);
          lVar14 = *(long *)puVar6;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar12 != 0) {
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
              plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
              *plVar13 = lVar8;
              thunk_FUN_02134474(plVar13,lVar8);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar11,lVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            while( true ) {
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (cRam0000000004f9b894 == '\0') {
                FUN_02132f7c(PTR_DAT_04cabaf8);
                cRam0000000004f9b894 = '\x01';
              }
              lVar11 = *(long *)puVar2;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar11 = *(long *)puVar2;
              }
              lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
              if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x170), lVar12 == 0)) break;
              if (*(int *)(lVar12 + 0x18) < 8) {
                return lVar8;
              }
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (cRam0000000004f9b894 == '\0') {
                FUN_02132f7c(PTR_DAT_04cabaf8);
                cRam0000000004f9b894 = '\x01';
              }
              lVar11 = *(long *)puVar2;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar11 = *(long *)puVar2;
              }
              lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
              if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x170), lVar11 == 0)) break;
              System_Collections_Generic_List_object___RemoveAt_3a833a0
                        (lVar11,0,*(undefined8 *)puVar7);
            }
          }
        }
      }
    }
  }
LAB_02371f3c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

