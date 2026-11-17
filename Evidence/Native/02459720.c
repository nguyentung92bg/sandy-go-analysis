/* IL2CPP: Dino.BusSand.Cheat.CheatBinding$$.ctor
void Dino_BusSand_Cheat_CheatBinding___ctor (Dino_BusSand_Cheat_CheatBinding_o* __this, int32_t a, int32_t k, bool ctrl, bool shift, bool alt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatBinding$$.ctor
   void Dino_BusSand_Cheat_CheatBinding___ctor (Dino_BusSand_Cheat_CheatBinding_o* __this, int32_t
   a, int32_t k, bool ctrl, bool shift, bool alt, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatBinding___ctor_2359720
               (long param_1,undefined4 param_2,undefined4 param_3,byte param_4,byte param_5,
               byte param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar2 = PTR_DAT_04cba318;
  puVar1 = PTR_DAT_04cba310;
                    /* try { // try from 02459750 to 02559afb has its CatchHandler @ 02459750
                       catch() { ... } // from try @ 02459750 with catch @ 02459750
                       catch() { ... } // from try @ 02459b20 with catch @ 02459750
                       catch() { ... } // from try @ 02459c28 with catch @ 02459750
                       catch() { ... } // from try @ 02459c54 with catch @ 02459750 */
  if ((bRam0000000004f9c720 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba310);
    FUN_02132f7c(PTR_DAT_04cba318);
    bRam0000000004f9c720 = 1;
  }
  System_Object___ctor_4870e5c(param_1,0);
  uStack_68 = *(undefined8 *)puVar1;
  uStack_60 = 0xffffffffffffffff;
  uStack_58 = param_2;
  uVar3 = System_Enum__ToString_4863070(&uStack_68,0);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  thunk_FUN_02134474();
  uStack_80 = *(undefined8 *)puVar2;
  uStack_78 = 0xffffffffffffffff;
  uStack_70 = param_3;
  uVar3 = System_Enum__ToString_4863070(&uStack_80,0);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
  *(byte *)(param_1 + 0x20) = param_4 & 1;
  *(byte *)(param_1 + 0x21) = param_5 & 1;
  *(byte *)(param_1 + 0x22) = param_6 & 1;
  return;
}

