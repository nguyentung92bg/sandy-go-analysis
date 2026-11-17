/* IL2CPP: Dino.BusSand.DataPack$$ContentId
System_String_o* Dino_BusSand_DataPack__ContentId (Dino_BusSand_DataPack_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.DataPack$$ContentId
   System_String_o* Dino_BusSand_DataPack__ContentId (Dino_BusSand_DataPack_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_DataPack__ContentId_237b9e0(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_64;
  
  if ((bRam0000000004f9c807 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac008);
    FUN_02132f7c(PTR_DAT_04cbb740);
    FUN_02132f7c(PTR_DAT_04cbb638);
    FUN_02132f7c(PTR_DAT_04cab6a0);
    FUN_02132f7c(PTR_DAT_04cab6c8);
    FUN_02132f7c(PTR_DAT_04cab6d0);
    FUN_02132f7c(PTR_DAT_04cab720);
    FUN_02132f7c(PTR_DAT_04cbb748);
    FUN_02132f7c(PTR_DAT_04cac068);
    FUN_02132f7c(PTR_DAT_04cab748);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04caa2d0);
    FUN_02132f7c(PTR_DAT_04cbb750);
    bRam0000000004f9c807 = 1;
  }
  puVar4 = PTR_DAT_04cac068;
  puVar3 = PTR_DAT_04cab748;
  puVar2 = PTR_DAT_04caa2d0;
  uStack_64 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar7 = System_Collections_Generic_Dictionary_object__object___get_Keys_34b406c
                      (*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_04cbb638);
    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Collections_Generic_List_object____ctor_3a814c8(lVar8,uVar7,*(undefined8 *)puVar4);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b671 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa2d0);
      cRam0000000004f9b671 = '\x01';
    }
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar2;
    }
    puVar5 = PTR_DAT_04cac008;
    puVar4 = PTR_DAT_04cab720;
    puVar3 = PTR_DAT_04cab6c8;
    puVar2 = PTR_DAT_04caa200;
    if (lVar8 != 0) {
      uVar13 = 0x811c9dc5;
      System_Collections_Generic_List_object___Sort_3a835cc
                (lVar8,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10),
                 *(undefined8 *)PTR_DAT_04cbb748);
      uStack_64 = 0x811c9dc5;
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_98,lVar8,*(undefined8 *)puVar4);
      uStack_70 = uStack_88;
      uStack_78 = puStack_90;
      uStack_80 = uStack_98;
      uStack_98 = 0;
      puStack_90 = &uStack_80;
      while( true ) {
        uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                           (&uStack_80,*(undefined8 *)puVar3);
        uVar7 = uStack_70;
        if ((uVar10 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_80,*(undefined8 *)PTR_DAT_04cab6a0);
          System_UInt32__ToString_484c3b4(&uStack_64,*(undefined8 *)PTR_DAT_04cbb750,0);
          return;
        }
        plVar11 = (long *)System_Text_Encoding__get_UTF8_46eb380(0);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar8 = (**(code **)(*plVar11 + 0x248))(plVar11,uVar7,*(undefined8 *)(*plVar11 + 0x250));
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
          uVar10 = 0;
          uVar12 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
          do {
            if (uVar12 <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            bVar1 = *(byte *)(lVar8 + 0x20 + uVar10);
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar10 = uVar10 + 1;
            uVar13 = (uVar13 ^ bVar1) * 0x1000193;
            uVar12 = (ulong)*(uint *)(lVar8 + 0x18);
            uStack_64 = uVar13;
          } while ((long)uVar10 < (long)(int)*(uint *)(lVar8 + 0x18));
        }
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar13 = uVar13 * 0x1000193;
        uStack_64 = uVar13;
        if (*(long *)(param_1 + 0x10) == 0) break;
        lVar8 = System_Collections_Generic_Dictionary_object__object___get_Item_34b4324
                          (*(long *)(param_1 + 0x10),uVar7,*(undefined8 *)PTR_DAT_04cbb740);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        iVar6 = System_Math__Max_4830fc8(0,*(int *)(lVar8 + 0x18) + -8,0);
        uVar7 = *(undefined8 *)(lVar8 + 0x18);
        if (iVar6 < (int)uVar7) {
          lVar9 = (long)iVar6;
          do {
            if ((uint)uVar7 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            bVar1 = *(byte *)(lVar8 + 0x20 + lVar9);
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              uVar7 = *(undefined8 *)(lVar8 + 0x18);
            }
            lVar9 = lVar9 + 1;
            uVar13 = (uVar13 ^ bVar1) * 0x1000193;
            uStack_64 = uVar13;
          } while (lVar9 < (int)uVar7);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

