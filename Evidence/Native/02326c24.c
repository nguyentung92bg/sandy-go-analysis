/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$RunGuide
System_Collections_IEnumerator_o* Dino_BusSand_App_Meta_BattleRoyaleFeature__RunGuide (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$RunGuide
   System_Collections_IEnumerator_o* Dino_BusSand_App_Meta_BattleRoyaleFeature__RunGuide
   (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleRoyaleFeature__RunGuide_2226c24(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb2ce8;
                    /* try { // try from 02326c28 to 02426c33 has its CatchHandler @ 02326910 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02326c20 with catch @ 02326c30
                        */
                    /* try { // try from 02326c34 to 02426ddb has its CatchHandler @ 02326c34
                       catch() { ... } // from try @ 02326c34 with catch @ 02326c34
                       catch() { ... } // from try @ 02326f24 with catch @ 02326c34
                       catch() { ... } // from try @ 02326ffc with catch @ 02326c34
                       catch() { ... } // from try @ 02327068 with catch @ 02326c34 */
  if ((bRam0000000004f9bde4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2ce8);
    bRam0000000004f9bde4 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  return lVar2;
}

