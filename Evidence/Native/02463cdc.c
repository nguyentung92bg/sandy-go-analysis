/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Btn
System_Nullable_CheatAction__o Dino_BusSand_Cheat_CheatManager__Btn (Dino_BusSand_Cheat_CheatManager_o* __this, System_String_o* name, int32_t a, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Btn
   System_Nullable_CheatAction__o Dino_BusSand_Cheat_CheatManager__Btn
   (Dino_BusSand_Cheat_CheatManager_o* __this, System_String_o* name, int32_t a, const MethodInfo*
   method); */

undefined8
Dino_BusSand_Cheat_CheatManager__Btn_2363cdc(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_38;
  
  if ((bRam0000000004f9c743 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba558);
    FUN_02132f7c(PTR_DAT_04cba870);
    FUN_02132f7c(PTR_DAT_04cba660);
    FUN_02132f7c(PTR_DAT_04cb2000);
    bRam0000000004f9c743 = 1;
  }
  puVar3 = PTR_DAT_04cba660;
  puVar2 = PTR_DAT_04cba558;
  puVar1 = PTR_DAT_04cb2000;
  if (*(long *)(param_1 + 0x100) != 0) {
    uVar4 = Dino_BusSand_Cheat_CheatConfig__KeysOf_235b1c4(*(long *)(param_1 + 0x100),param_3);
    uVar4 = System_String__Concat_46d30e8
                      (param_2,*(undefined8 *)puVar3,uVar4,*(undefined8 *)puVar1,0);
    lVar8 = *(long *)puVar2;
    uVar7 = *(undefined8 *)(param_1 + 0xb8);
                    /* try { // try from 02463d84 to 02563d8b has its CatchHandler @ 02463e04 */
    lVar6 = *(long *)(lVar8 + 0x38);
    if (lVar6 == 0) {
      FUN_0216b4cc(lVar8);
      lVar6 = *(long *)(lVar8 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
                    /* try { // try from 02463da4 to 02563db3 has its CatchHandler @ 02463dfc */
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0216b470();
    }
                    /* try { // try from 02463db4 to 02563df3 has its CatchHandler @ 02463c8c */
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar6 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0216b470();
    }
    uVar5 = UnityEngine_GUILayout__Button_440f190(uVar4,uVar7,**(undefined8 **)(lVar6 + 0xb8),0);
                    /* try { // try from 02463df4 to 02563df7 has its CatchHandler @ 02463e00 */
    uStack_38 = 0;
                    /* try { // try from 02463df8 to 02563e1f has its CatchHandler @ 02463c8c */
    uVar4 = 0;
    if ((uVar5 & 1) != 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02463da4 with catch @ 02463dfc
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02463df4 with catch @ 02463e00
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02463d84 with catch @ 02463e04
                        */
      System_Nullable_Int32Enum____ctor_2bcbf5c(&uStack_38,param_3,*(undefined8 *)PTR_DAT_04cba870);
      uVar4 = uStack_38;
    }
                    /* try { // try from 02463e20 to 02563e23 has its CatchHandler @ 02463e3c */
                    /* try { // try from 02463e24 to 02563e3f has its CatchHandler @ 02463c8c */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

