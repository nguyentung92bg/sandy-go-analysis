/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$CheckGoldenCoinSettlement
void Dino_BusSand_App_Meta_GiftPackFeature__CheckGoldenCoinSettlement (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$CheckGoldenCoinSettlement
   void Dino_BusSand_App_Meta_GiftPackFeature__CheckGoldenCoinSettlement
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__CheckGoldenCoinSettlement_2236d50(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uStack_14;
  
                    /* try { // try from 02336d54 to 02436d57 has its CatchHandler @ 02336d7c */
                    /* try { // try from 02336d58 to 02436d5f has its CatchHandler @ 02336d70 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02336c54 with catch @ 02336d60
                       try { // try from 02336d60 to 02436d9b has its CatchHandler @ 02336af8 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02336bb0 with catch @ 02336d64
                        */
  if ((bRam0000000004f9bede & 1) == 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02336ca0 with catch @ 02336d70
                       catch(type#1 @ 049bb748) { ... } // from try @ 02336d58 with catch @ 02336d70
                        */
    FUN_02132f7c(PTR_DAT_04cb34a8);
    bRam0000000004f9bede = 1;
  }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02336bec with catch @ 02336d7c
                       catch(type#1 @ 049bb748) { ... } // from try @ 02336d54 with catch @ 02336d7c
                        */
  uStack_14 = 0;
  uVar2 = Dino_BusSand_App_Meta_GiftPackFeature__NeedShowGoldenCoinSettlement_223daa0
                    (param_1,&uStack_14);
  puVar1 = PTR_DAT_04cb34a8;
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 02336d9c to 02436d9f has its CatchHandler @ 02336dac */
    uVar3 = System_Int32__ToString_482d750(&uStack_14,0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02336d9c with catch @ 02336dac
                        */
                    /* try { // try from 02336db4 to 02436dbb has its CatchHandler @ 02336df4 */
    uVar3 = System_String__Concat_46c82e0(*(undefined8 *)puVar1,uVar3,0);
                    /* try { // try from 02336dbc to 02436dd7 has its CatchHandler @ 02336af8 */
    Dino_BusSand_App_Meta_GiftPackFeature__AddHallCommand_223b0ac(param_1,uVar3);
  }
  return;
}

