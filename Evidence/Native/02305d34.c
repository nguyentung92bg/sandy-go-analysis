/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$ApplyRemote
System_String_o* Dino_BusSand_App_Meta_EconomySettings__ApplyRemote (System_String_o* json, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$ApplyRemote
   System_String_o* Dino_BusSand_App_Meta_EconomySettings__ApplyRemote (System_String_o* json, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_EconomySettings__ApplyRemote_2205d34(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  puVar2 = PTR_DAT_04cb1d58;
  puVar1 = PTR_DAT_04ca9c30;
  if ((bRam0000000004f9bcd8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04cb1da8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bcd8 = 1;
  }
  lVar4 = *(long *)puVar2;
  lVar6 = *(long *)puVar1;
  if (param_1 != 0) {
    lVar6 = param_1;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  plVar5 = (long *)(*(long *)(lVar4 + 0xb8) + 0x38);
  *plVar5 = lVar6;
  thunk_FUN_02134474(plVar5,lVar6);
  Dino_BusSand_App_Meta_EconomySettings__Rebuild_220592c();
  Dino_BusSand_App_Meta_EconomySettings__CrashKey_2205bc0();
  if (cRam0000000004f9bcff == '\0') {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    cRam0000000004f9bcff = '\x01';
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar2;
  }
  uVar7 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),0);
  if ((uVar7 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9bcff == '\0') {
      FUN_02132f7c(PTR_DAT_04cb1d58);
      cRam0000000004f9bcff = '\x01';
    }
    puVar3 = PTR_DAT_04cb1da8;
    puVar1 = PTR_DAT_04ca9af8;
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar2;
    }
    uVar8 = System_String__Concat_46c82e0
                      (*(undefined8 *)puVar3,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    UnityEngine_Debug__Log_4360fc8(uVar8,0);
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar2;
  }
  plVar5 = *(long **)(*(long *)(lVar6 + 0xb8) + 0x18);
  if (plVar5 != (long *)0x0) {
    lVar6 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
    puVar1 = PTR_DAT_04caa458;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 02305eec to 024060a3 has its CatchHandler @ 023062dc */
    if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
      uVar7 = 0;
      uVar9 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      do {
        if (uVar9 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar5 = *(long **)(lVar6 + 0x20 + uVar7 * 8);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*plVar5 != *(long *)puVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4();
        }
        (*(code *)plVar5[3])(plVar5[8],plVar5[5]);
        uVar9 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
    lVar6 = *(long *)puVar2;
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9bcff == '\0') {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    cRam0000000004f9bcff = '\x01';
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar2;
  }
  return *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
}

