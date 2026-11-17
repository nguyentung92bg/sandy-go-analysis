/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$MenIndexOf
int32_t Dino_BusSand_App_UI_BattleRoyaleScenePanel__MenIndexOf (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, UnityEngine_Transform_o* gate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$MenIndexOf
   int32_t Dino_BusSand_App_UI_BattleRoyaleScenePanel__MenIndexOf
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, UnityEngine_Transform_o* gate, const
   MethodInfo* method); */

int Dino_BusSand_App_UI_BattleRoyaleScenePanel__MenIndexOf_2193980(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 02293998 to 023939a3 has its CatchHandler @ 022939b8 */
                    /* try { // try from 022939a4 to 023939cb has its CatchHandler @ 0229396c */
  if ((bRam0000000004f9b9b1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad708);
                    /* catch() { ... } // from try @ 02293998 with catch @ 022939b8 */
    FUN_02132f7c(PTR_DAT_04cad7c8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b9b1 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    if (param_2 == 0) goto LAB_02293a6c;
    uVar2 = UnityEngine_Transform__IsChildOf_43d4dc4(param_2,*(undefined8 *)(param_1 + 0x78),0);
    if ((uVar2 & 1) != 0) {
                    /* catch() { ... } // from try @ 02293a60 with catch @ 02293a80 */
      return 0;
    }
  }
  puVar1 = PTR_DAT_04cad7c8;
  lVar3 = *(long *)(param_1 + 0x70);
  if (lVar3 != 0) {
    iVar4 = 1;
    do {
                    /* try { // try from 02293a38 to 02393a5f has its CatchHandler @ 02293a38
                       catch() { ... } // from try @ 02293a38 with catch @ 02293a38
                       catch() { ... } // from try @ 02293a6c with catch @ 02293a38 */
      if (*(int *)(lVar3 + 0x18) <= iVar4 + -1) {
        return -1;
      }
      uVar5 = System_Collections_Generic_List_object___get_Item_3a81924
                        (lVar3,iVar4 + -1,*(undefined8 *)puVar1);
      if (param_2 == 0) break;
      uVar2 = UnityEngine_Transform__IsChildOf_43d4dc4(param_2,uVar5,0);
      if ((uVar2 & 1) != 0) {
        return iVar4;
      }
                    /* try { // try from 02293a60 to 02393a6b has its CatchHandler @ 02293a80 */
      lVar3 = *(long *)(param_1 + 0x70);
      iVar4 = iVar4 + 1;
    } while (lVar3 != 0);
  }
LAB_02293a6c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02293a6c to 02393a93 has its CatchHandler @ 02293a38 */
  FUN_02133224();
}

