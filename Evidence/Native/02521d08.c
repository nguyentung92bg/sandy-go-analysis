/* IL2CPP: Dino.BusSand.Core.TruckGrid$$.ctor
void Dino_BusSand_Core_TruckGrid___ctor (Dino_BusSand_Core_TruckGrid_o* __this, int32_t rows, int32_t cols, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.TruckGrid$$.ctor
   void Dino_BusSand_Core_TruckGrid___ctor (Dino_BusSand_Core_TruckGrid_o* __this, int32_t rows,
   int32_t cols, const MethodInfo* method); */

void Dino_BusSand_Core_TruckGrid___ctor_2421d08(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  puVar7 = PTR_DAT_04cbecf0;
  puVar6 = PTR_DAT_04cbece8;
  puVar5 = PTR_DAT_04cbec68;
  puVar4 = PTR_DAT_04cbe9d8;
  puVar3 = PTR_DAT_04cbe9d0;
  puVar2 = PTR_DAT_04cbd308;
  puVar1 = PTR_DAT_04cbd2f0;
                    /* try { // try from 02521d18 to 02621d1b has its CatchHandler @ 02521d28 */
                    /* try { // try from 02521d1c to 02621d4f has its CatchHandler @ 02521aa4 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02521d18 with catch @ 02521d28
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02521c8c with catch @ 02521d2c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02521c50 with catch @ 02521d30
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02521bec with catch @ 02521d34
                        */
                    /* try { // try from 02521d50 to 02621d53 has its CatchHandler @ 02521d5c */
                    /* catch() { ... } // from try @ 02521d50 with catch @ 02521d5c */
                    /* try { // try from 02521d60 to 02621d67 has its CatchHandler @ 02521d70 */
                    /* try { // try from 02521d68 to 02621d73 has its CatchHandler @ 02521aa4 */
  if ((bRam0000000004f9cbd4 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02521d60 with catch @ 02521d70
                        */
    FUN_02132f7c(PTR_DAT_04cbecf0);
    FUN_02132f7c(PTR_DAT_04cbece8);
    FUN_02132f7c(PTR_DAT_04cbd2f0);
    FUN_02132f7c(PTR_DAT_04cbecf8);
    FUN_02132f7c(PTR_DAT_04cbe9d8);
    FUN_02132f7c(PTR_DAT_04cbec08);
    FUN_02132f7c(PTR_DAT_04cbec68);
    FUN_02132f7c(PTR_DAT_04cbed00);
    FUN_02132f7c(PTR_DAT_04cbd308);
    FUN_02132f7c(PTR_DAT_04cbe9d0);
    bRam0000000004f9cbd4 = 1;
  }
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
  System_Collections_Generic_Dictionary_int__object____ctor_343658c(uVar8,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar8);
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar8,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x20),uVar8);
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_BusObb____ctor_39f768c(uVar8,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x28),uVar8);
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_List_ValueTuple_BusObb__byte_____ctor_3998f40
            (uVar8,*(undefined8 *)PTR_DAT_04cbec08);
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),uVar8);
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbed00);
  System_Collections_Generic_List_ValueTuple_BusObb__int_____ctor_399bcd8
            (uVar8,*(undefined8 *)PTR_DAT_04cbecf8);
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x38),uVar8);
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_BusObb____ctor_39f768c(uVar8,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x40) = uVar8;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x40),uVar8);
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  System_Object___ctor_4870e5c(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}

