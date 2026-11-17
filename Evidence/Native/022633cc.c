/* IL2CPP: Dino.BusSand.App.UiAssets$$Miss
void Dino_BusSand_App_UiAssets__Miss (System_String_o* kind, System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UiAssets$$Miss
   void Dino_BusSand_App_UiAssets__Miss (System_String_o* kind, System_String_o* key, const
   MethodInfo* method); */

void Dino_BusSand_App_UiAssets__Miss_21633cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int *piVar8;
  long *plVar9;
  
  puVar1 = PTR_DAT_04cab490;
  if ((bRam0000000004f9b83e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cab7e0);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cab270);
    FUN_02132f7c(PTR_DAT_04cac368);
    FUN_02132f7c(PTR_DAT_04cab388);
    bRam0000000004f9b83e = 1;
  }
  puVar2 = PTR_DAT_04cab388;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x40);
  uVar4 = System_String__Concat_46d2b84(param_1,*(undefined8 *)puVar2,param_2,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar5 = System_Collections_Generic_HashSet_object___Add_37e654c
                    (lVar3,uVar4,*(undefined8 *)PTR_DAT_04cab7e0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  uVar4 = System_String__Concat_46d30e8
                    (*(undefined8 *)PTR_DAT_04cac368,param_1,*(undefined8 *)PTR_DAT_04cab270,param_2
                     ,0);
  if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
  }
  puVar1 = PTR_DAT_04ca9af8;
  uVar7 = 0;
  if ((bRam0000000004fa6262 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8,0);
    FUN_02132f7c(PTR_DAT_04ce7050);
    bRam0000000004fa6262 = 1;
    uVar7 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar7 = extraout_x1_00;
  }
  if (cRam0000000004f9d848 == '\0') {
    FUN_02132f7c(PTR_DAT_04ca9af8,uVar7);
    cRam0000000004f9d848 = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  plVar9 = *(long **)(*(long *)(lVar3 + 0xb8) + 8);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar3 = *plVar9;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04ce7050) {
        puVar6 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_044610b0;
      }
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)PTR_DAT_04ce7050,3);
LAB_044610b0:
                    /* WARNING: Could not recover jumptable at 0x044610c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar6)(plVar9,3,uVar4,puVar6[1]);
  return;
}

