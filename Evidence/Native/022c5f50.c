/* IL2CPP: Dino.BusSand.App.UI.TowerEventPanel$$PlaceBus
void Dino_BusSand_App_UI_TowerEventPanel__PlaceBus (Dino_BusSand_App_UI_TowerEventPanel_o* __this, float floor, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.TowerEventPanel$$PlaceBus
   void Dino_BusSand_App_UI_TowerEventPanel__PlaceBus (Dino_BusSand_App_UI_TowerEventPanel_o*
   __this, float floor, const MethodInfo* method); */

void Dino_BusSand_App_UI_TowerEventPanel__PlaceBus_21c5f50(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c5e6c with catch @ 022c5f50
                       catch(type#1 @ 00000000) { ... } // from try @ 022c5edc with catch @ 022c5f50
                        */
  puVar1 = PTR_DAT_04ca9ae8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c5e08 with catch @ 022c5f60
                        */
                    /* try { // try from 022c5f74 to 023c5f7b has its CatchHandler @ 022c5f84 */
  if ((bRam0000000004f9baf9 & 1) == 0) {
                    /* try { // try from 022c5f7c to 023c5f87 has its CatchHandler @ 022c5de0 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c5f74 with catch @ 022c5f84
                        */
                    /* try { // try from 022c5f88 to 023c5f8b has its CatchHandler @ 022c5f94 */
    bRam0000000004f9baf9 = 1;
  }
                    /* try { // try from 022c5f8c to 023c5f97 has its CatchHandler @ 022c5de0 */
  uVar3 = *(undefined8 *)(param_2 + 0x50);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c5f88 with catch @ 022c5f94
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c609c with catch @ 022c5f98
                       catch(type#1 @ 00000000) { ... } // from try @ 022c610c with catch @ 022c5f98
                       catch(type#1 @ 00000000) { ... } // from try @ 022c611c with catch @ 022c5f98
                        */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_2 + 0x68) != 0) {
                    /* try { // try from 022c5fbc to 023c5fc7 has its CatchHandler @ 022c60f0 */
    if (*(int *)(*(long *)(param_2 + 0x68) + 0x18) < 2) {
      return;
    }
                    /* try { // try from 022c5fd8 to 023c5fe3 has its CatchHandler @ 022c60dc */
    lVar4 = *(long *)(param_2 + 0x50);
                    /* try { // try from 022c5fe4 to 023c5ff3 has its CatchHandler @ 022c60cc */
    Dino_BusSand_App_UI_TowerEventPanel__FloorY_21c64b8(param_1,param_2);
    if (lVar4 != 0) {
      if ((bRam0000000004fa8a88 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7bc8,0);
        bRam0000000004fa8a88 = 1;
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
      }
      if (pcRam0000000004fa8ad0 == (code *)0x0) {
        pcRam0000000004fa8ad0 = (code *)FUN_02132f40(&UNK_00e47400);
      }
      (*pcRam0000000004fa8ad0)(lVar4,&stack0xffffffffffffffe8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

