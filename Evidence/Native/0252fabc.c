/* IL2CPP: Dino.BusSand.Core.Lane$$.ctor
void Dino_BusSand_Core_Lane___ctor (Dino_BusSand_Core_Lane_o* __this, int32_t id, int32_t angle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Lane$$.ctor
   void Dino_BusSand_Core_Lane___ctor (Dino_BusSand_Core_Lane_o* __this, int32_t id, int32_t angle,
   const MethodInfo* method); */

void Dino_BusSand_Core_Lane___ctor_242fabc(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR_DAT_04cbed20;
  puVar3 = PTR_DAT_04cbed18;
  puVar2 = PTR_DAT_04cbd240;
  puVar1 = PTR_DAT_04cbd238;
  if ((bRam0000000004f9cc0a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbed20);
    FUN_02132f7c(PTR_DAT_04cbd240);
    FUN_02132f7c(PTR_DAT_04cbed18);
    FUN_02132f7c(PTR_DAT_04cbd238);
    bRam0000000004f9cc0a = 1;
  }
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_ValueTuple_double__double_____ctor_39a13e4
            (uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar5);
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_ValueTuple_int__Int32Enum_____ctor_39ae440
            (uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x28),uVar5);
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  System_Object___ctor_4870e5c(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  return;
}

