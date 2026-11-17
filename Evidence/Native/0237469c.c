/* IL2CPP: Dino.BusSand.App.Meta.Profile$$AddAttempt
void Dino_BusSand_App_Meta_Profile__AddAttempt (int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$AddAttempt
   void Dino_BusSand_App_Meta_Profile__AddAttempt (int32_t level, const MethodInfo* method); */

void Dino_BusSand_App_Meta_Profile__AddAttempt_227469c(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c111 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad218);
    FUN_02132f7c(PTR_DAT_04cad220);
    FUN_02132f7c(PTR_DAT_04cad228);
    FUN_02132f7c(PTR_DAT_04cad240);
    FUN_02132f7c(PTR_DAT_04cad248);
    FUN_02132f7c(PTR_DAT_04cad230);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c111 = 1;
  }
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  lStack_50 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_Profile__TouchActiveDay_2270e48();
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  puVar6 = PTR_DAT_04cad248;
  puVar5 = PTR_DAT_04cad240;
  puVar4 = PTR_DAT_04cad220;
  puVar3 = PTR_DAT_04cad218;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x100), lVar7 != 0)) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_78,lVar7,*(undefined8 *)PTR_DAT_04cad230);
    lStack_50 = lStack_68;
    puStack_58 = puStack_70;
    uStack_60 = uStack_78;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
    while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_60,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(lStack_50 + 0x10) == param_1) {
        lVar7 = *(long *)puVar2;
        *(long *)(lStack_50 + 0x18) = *(long *)(lStack_50 + 0x18) + 1;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30();
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_60,*(undefined8 *)puVar3);
        return;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_60,*(undefined8 *)puVar3);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar2;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
    if (lVar7 != 0) {
      lVar12 = *(long *)(lVar7 + 0x100);
      lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
      System_Object___ctor_4870e5c(lVar7,0);
      if (lVar7 != 0) {
        *(int *)(lVar7 + 0x10) = param_1;
        *(undefined8 *)(lVar7 + 0x18) = 1;
        if (lVar12 != 0) {
          lVar10 = *(long *)(lVar12 + 0x10);
          lVar11 = *(long *)puVar6;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar10 != 0) {
            uVar1 = *(uint *)(lVar12 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar1 + 1;
              plVar9 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
              *plVar9 = lVar7;
              thunk_FUN_02134474(plVar9,lVar7);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar12,lVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

