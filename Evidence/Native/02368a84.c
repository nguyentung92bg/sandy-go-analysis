/* IL2CPP: Dino.BusSand.App.Meta.RewardedSettings$$.ctor
void Dino_BusSand_App_Meta_RewardedSettings___ctor (Dino_BusSand_App_Meta_RewardedSettings_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.RewardedSettings$$.ctor
   void Dino_BusSand_App_Meta_RewardedSettings___ctor (Dino_BusSand_App_Meta_RewardedSettings_o*
   __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_RewardedSettings___ctor_2268a84(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_DAT_04cb4660;
  puVar2 = PTR_DAT_04cb4658;
  puVar1 = PTR_DAT_04caec70;
                    /* try { // try from 02368a98 to 02468a9b has its CatchHandler @ 02368aa4 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02368a78 with catch @ 02368a9c
                       try { // try from 02368a9c to 02468abb has its CatchHandler @ 023688e0 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02368a1c with catch @ 02368aa0
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02368a48 with catch @ 02368aa4
                       catch(type#1 @ 049bb748) { ... } // from try @ 02368a98 with catch @ 02368aa4
                        */
  if ((bRam0000000004f9c09a & 1) == 0) {
                    /* try { // try from 02368abc to 02468ad3 has its CatchHandler @ 02368b44 */
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cb4658);
                    /* try { // try from 02368ad4 to 02468b33 has its CatchHandler @ 023688e0 */
    FUN_02132f7c(PTR_DAT_04cb4660);
    bRam0000000004f9c09a = 1;
  }
  uVar4 = FUN_02133068(*(undefined8 *)puVar1,6);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar4,*(undefined8 *)puVar2,0);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x10),uVar4);
  uVar4 = *(undefined8 *)puVar1;
  *(undefined4 *)(param_1 + 0x18) = 8;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x20) = 10;
  uVar4 = FUN_02133068(uVar4,5);
                    /* try { // try from 02368b34 to 02468b43 has its CatchHandler @ 02368b44 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar4,*(undefined8 *)puVar3,0);
                    /* catch() { ... } // from try @ 02368abc with catch @ 02368b44
                       catch() { ... } // from try @ 02368b34 with catch @ 02368b44 */
                    /* try { // try from 02368b48 to 02468b4b has its CatchHandler @ 02368b54 */
                    /* try { // try from 02368b4c to 02468b57 has its CatchHandler @ 023688e0 */
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x28),uVar4);
  uVar4 = _UNK_00e69a08;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02368b48 with catch @ 02368b54
                        */
  *(undefined4 *)(param_1 + 0x38) = 2;
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  return param_1;
}

