/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtSpend$$Snapshot
void Dino_BusSand_App_Meta_BattleYachtSpend__Snapshot (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtSpend$$Snapshot
   void Dino_BusSand_App_Meta_BattleYachtSpend__Snapshot (const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleYachtSpend__Snapshot_2228490(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  
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
        lVar6 = *(long *)puVar3;
        uVar1 = *(undefined4 *)(lVar5 + 0x20 + uVar9 * 4);
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar3;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        uVar7 = Dino_BusSand_App_Meta_Profile__Count_225b150(uVar1,0);
        if (lVar6 == 0) goto LAB_02328604;
        System_Collections_Generic_Dictionary_int__long___set_Item_3433c2c
                  (lVar6,uVar1,uVar7,*(undefined8 *)puVar4);
        uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
  }
  return;
}

