/* IL2CPP: Dino.BusSand.App.Meta.Profile$$SetCounter
void Dino_BusSand_App_Meta_Profile__SetCounter (System_String_o* name, int32_t v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$SetCounter
   void Dino_BusSand_App_Meta_Profile__SetCounter (System_String_o* name, int32_t v, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_Profile__SetCounter_2273b58(long *param_1,int param_2)

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
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  
  if ((bRam0000000004f9c10c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad218);
    FUN_02132f7c(PTR_DAT_04cad220);
    FUN_02132f7c(PTR_DAT_04cad228);
    FUN_02132f7c(PTR_DAT_04cad240);
    FUN_02132f7c(PTR_DAT_04cad248);
    FUN_02132f7c(PTR_DAT_04cad230);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c10c = 1;
  }
  puVar2 = PTR_DAT_04cabaf8;
  uStack_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  if (param_1 != (long *)0x0) {
    iVar7 = (**(code **)(*param_1 + 0x158))(param_1,*(undefined8 *)(*param_1 + 0x160));
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
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
    puVar6 = PTR_DAT_04cad248;
    puVar5 = PTR_DAT_04cad240;
    puVar4 = PTR_DAT_04cad220;
    puVar3 = PTR_DAT_04cad218;
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
    if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x120), lVar8 != 0)) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_88,lVar8,*(undefined8 *)PTR_DAT_04cad230);
      lStack_60 = lStack_78;
      puStack_68 = puStack_80;
      uStack_70 = uStack_88;
      uStack_88 = 0;
      puStack_80 = &uStack_70;
      while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_70,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
        if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(int *)(lStack_60 + 0x10) == iVar7) {
          lVar8 = *(long *)puVar2;
          *(long *)(lStack_60 + 0x18) = (long)param_2;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30();
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_70,*(undefined8 *)puVar3);
          return;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_70,*(undefined8 *)puVar3);
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
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
      if (lVar8 != 0) {
        lVar13 = *(long *)(lVar8 + 0x120);
        lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
        System_Object___ctor_4870e5c(lVar8,0);
        if (lVar8 != 0) {
          *(int *)(lVar8 + 0x10) = iVar7;
          *(long *)(lVar8 + 0x18) = (long)param_2;
          if (lVar13 != 0) {
            lVar11 = *(long *)(lVar13 + 0x10);
            lVar12 = *(long *)puVar6;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar11 != 0) {
              uVar1 = *(uint *)(lVar13 + 0x18);
              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                plVar10 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                *plVar10 = lVar8;
                thunk_FUN_02134474(plVar10,lVar8);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar13,lVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

