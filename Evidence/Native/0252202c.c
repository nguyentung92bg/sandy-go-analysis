/* IL2CPP: Dino.BusSand.Core.Garage$$.ctor
void Dino_BusSand_Core_Garage___ctor (Dino_BusSand_Core_Garage_o* __this, int32_t id, double cx, double cz, int32_t angle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Garage$$.ctor
   void Dino_BusSand_Core_Garage___ctor (Dino_BusSand_Core_Garage_o* __this, int32_t id, double cx,
   double cz, int32_t angle, const MethodInfo* method); */

void Dino_BusSand_Core_Garage___ctor_242202c
               (undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_04cbed20;
  puVar1 = PTR_DAT_04cbed18;
  if ((bRam0000000004f9cbee & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbed20);
    FUN_02132f7c(PTR_DAT_04cbed18);
    bRam0000000004f9cbee = 1;
  }
  uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_ValueTuple_int__Int32Enum_____ctor_39ae440
            (uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_3 + 0x30) = uVar3;
  thunk_FUN_02134474((undefined8 *)(param_3 + 0x30),uVar3);
  *(undefined4 *)(param_3 + 0x38) = 0xffffffff;
  System_Object___ctor_4870e5c(param_3,0);
  *(undefined4 *)(param_3 + 0x10) = param_4;
  *(undefined8 *)(param_3 + 0x18) = param_1;
  *(undefined8 *)(param_3 + 0x20) = param_2;
  *(undefined4 *)(param_3 + 0x28) = param_5;
  return;
}

