/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$Ensure
void Dino_BusSand_App_Meta_EconomySettings__Ensure (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$Ensure
   void Dino_BusSand_App_Meta_EconomySettings__Ensure (const MethodInfo* method); */

void Dino_BusSand_App_Meta_EconomySettings__Ensure_2205454(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar2 = PTR_DAT_04cb1d58;
  if ((bRam0000000004f9bcd6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    bRam0000000004f9bcd6 = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x40) != '\0') {
    return;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cb1d58;
  if ((bRam0000000004f9bcda & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d80);
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04cb1d88);
    FUN_02132f7c(PTR_DAT_04cb1d90);
    FUN_02132f7c(PTR_DAT_04cb1d98);
    FUN_02132f7c(PTR_DAT_04cb1c50);
    bRam0000000004f9bcda = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x50);
  *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0x40) = 1;
  puVar3 = PTR_DAT_04cb1d98;
  puVar1 = PTR_DAT_04cb1c50;
  if (lVar5 != 0) {
    System_Collections_Generic_Dictionary_object__object___Clear_34b452c
              (lVar5,*(undefined8 *)PTR_DAT_04cb1d80);
    lVar4 = *(long *)puVar3;
    uVar9 = *(undefined8 *)puVar1;
    uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar3;
    }
    puVar7 = *(undefined8 **)(lVar4 + 0xb8);
    lVar5 = puVar7[1];
    if (lVar5 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        puVar7 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
      uVar10 = *puVar7;
      lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb1d88);
      System_Func_object__bool____ctor_37a35b4(lVar5,uVar10,*(undefined8 *)PTR_DAT_04cb1d90,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      *plVar6 = lVar5;
      thunk_FUN_02134474(plVar6,lVar5);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = Dino_BusSand_App_Meta_EconomySettings__Parse_22063d4(uVar8,uVar9,lVar5);
    puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
    *puVar7 = uVar8;
    thunk_FUN_02134474(puVar7,uVar8);
    lVar4 = *(long *)puVar2;
    lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x48);
    if (lVar5 != 0) {
      uVar8 = *(undefined8 *)(lVar5 + 0x20);
      if (cRam0000000004f9bd00 == '\0') {
        FUN_02132f7c(puVar2);
        lVar4 = *(long *)puVar2;
        cRam0000000004f9bd00 = '\x01';
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar2;
      }
      **(undefined8 **)(lVar4 + 0xb8) = uVar8;
      thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar8);
      lVar4 = *(long *)puVar2;
      lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x48);
      if (lVar5 != 0) {
        uVar8 = *(undefined8 *)(lVar5 + 0x28);
        if (cRam0000000004f9bd01 == '\0') {
          FUN_02132f7c(puVar2);
          lVar4 = *(long *)puVar2;
          cRam0000000004f9bd01 = '\x01';
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar4 = *(long *)puVar2;
        }
        puVar7 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
        *puVar7 = uVar8;
        thunk_FUN_02134474(puVar7,uVar8);
        lVar4 = *(long *)puVar2;
        lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x48);
        if (lVar5 != 0) {
          uVar8 = *(undefined8 *)(lVar5 + 0x30);
          if (cRam0000000004f9bd02 == '\0') {
            FUN_02132f7c(puVar2);
            lVar4 = *(long *)puVar2;
            cRam0000000004f9bd02 = '\x01';
          }
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar4 = *(long *)puVar2;
          }
          puVar7 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
          *puVar7 = uVar8;
          if (iRam00000000051c1b10 != 0) {
            FUN_02220bf0(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                         ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

