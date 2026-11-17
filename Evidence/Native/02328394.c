/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtSpend$$Ensure
void Dino_BusSand_App_Meta_BattleYachtSpend__Ensure (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtSpend$$Ensure
   void Dino_BusSand_App_Meta_BattleYachtSpend__Ensure (const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleYachtSpend__Ensure_2228394(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar2 = PTR_DAT_04cb2c68;
  if ((bRam0000000004f9be09 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04cb2d90);
    FUN_02132f7c(PTR_DAT_04cb2c68);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9be09 = 1;
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  lVar7 = *(long *)(lVar5 + 0xb8);
  if (*(char *)(lVar7 + 0x20) == '\0') {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
    }
    puVar3 = PTR_DAT_04cac7e0;
    *(undefined1 *)(lVar7 + 0x20) = 1;
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Action_int____ctor_35ef18c(uVar6,0,*(undefined8 *)PTR_DAT_04cb2d90,0);
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__add_ItemChanged_226f620(uVar6,0);
    lVar5 = *(long *)puVar2;
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9be0a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2c68);
    FUN_02132f7c(PTR_DAT_04cb2d98);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9be0a = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_04cb2c68;
  if (*(long *)(*(long *)(lVar5 + 0xb8) + 0x10) != 0) {
    lVar5 = *(long *)PTR_DAT_04cb2c68;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar3;
    }
    puVar4 = PTR_DAT_04cb2d98;
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar5 == 0) {
LAB_02328604:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar9 = 0;
      uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar7 = *(long *)puVar3;
        uVar1 = *(undefined4 *)(lVar5 + 0x20 + uVar9 * 4);
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar7 = *(long *)puVar3;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        uVar6 = Dino_BusSand_App_Meta_Profile__Count_225b150(uVar1,0);
        if (lVar7 == 0) goto LAB_02328604;
        System_Collections_Generic_Dictionary_int__long___set_Item_3433c2c
                  (lVar7,uVar1,uVar6,*(undefined8 *)puVar4);
        uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
  }
  return;
}

