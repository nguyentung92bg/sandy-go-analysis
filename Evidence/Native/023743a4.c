/* IL2CPP: Dino.BusSand.App.Meta.Profile$$AddLevelTry
int32_t Dino_BusSand_App_Meta_Profile__AddLevelTry (int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$AddLevelTry
   int32_t Dino_BusSand_App_Meta_Profile__AddLevelTry (int32_t level, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_Profile__AddLevelTry_22743a4(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  
  puVar3 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c110 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad218);
    FUN_02132f7c(PTR_DAT_04cad220);
    FUN_02132f7c(PTR_DAT_04cad228);
    FUN_02132f7c(PTR_DAT_04cad240);
    FUN_02132f7c(PTR_DAT_04cad248);
    FUN_02132f7c(PTR_DAT_04cad230);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c110 = 1;
  }
  uStack_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar3;
  }
  puVar7 = PTR_DAT_04cad248;
  puVar6 = PTR_DAT_04cad240;
  puVar5 = PTR_DAT_04cad220;
  puVar4 = PTR_DAT_04cad218;
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x108), lVar8 != 0)) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_88,lVar8,*(undefined8 *)PTR_DAT_04cad230);
    lStack_60 = lStack_78;
    puStack_68 = puStack_80;
    uStack_70 = uStack_88;
    uStack_88 = 0;
    puStack_80 = &uStack_70;
    while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_70,*(undefined8 *)puVar5), lVar8 = lStack_60, (uVar9 & 1) != 0
          ) {
      if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(lStack_60 + 0x10) == param_1) {
        lVar10 = *(long *)puVar3;
        *(long *)(lStack_60 + 0x18) = *(long *)(lStack_60 + 0x18) + 1;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30();
        uVar1 = *(undefined4 *)(lVar8 + 0x18);
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_70,*(undefined8 *)puVar4);
        return uVar1;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_70,*(undefined8 *)puVar4);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar3;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
    if (lVar8 != 0) {
      lVar10 = *(long *)(lVar8 + 0x108);
      lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
      System_Object___ctor_4870e5c(lVar8,0);
      if (lVar8 != 0) {
        *(int *)(lVar8 + 0x10) = param_1;
        *(undefined8 *)(lVar8 + 0x18) = 1;
        if (lVar10 != 0) {
          lVar12 = *(long *)(lVar10 + 0x10);
          lVar13 = *(long *)puVar7;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar12 != 0) {
            uVar2 = *(uint *)(lVar10 + 0x18);
            if (uVar2 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar2 + 1;
              plVar11 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
              *plVar11 = lVar8;
              thunk_FUN_02134474(plVar11,lVar8);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar10,lVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30();
            return 1;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

