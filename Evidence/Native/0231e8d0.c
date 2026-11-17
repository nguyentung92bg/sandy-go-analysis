/* IL2CPP: Dino.BusSand.App.Meta.ActivityContinueFeature.ContinueSequence$$.ctor
void Dino_BusSand_App_Meta_ActivityContinueFeature_ContinueSequence___ctor (Dino_BusSand_App_Meta_ActivityContinueFeature_ContinueSequence_o* __this, System_Collections_Generic_List_IStakeActivity__o* list, System_Action_int__o* revive, System_Action_o* decline, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ActivityContinueFeature.ContinueSequence$$.ctor
   void Dino_BusSand_App_Meta_ActivityContinueFeature_ContinueSequence___ctor
   (Dino_BusSand_App_Meta_ActivityContinueFeature_ContinueSequence_o* __this,
   System_Collections_Generic_List_IStakeActivity__o* list, System_Action_int__o* revive,
   System_Action_o* decline, const MethodInfo* method); */

void Dino_BusSand_App_Meta_ActivityContinueFeature_ContinueSequence___ctor_221e8d0
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  System_Object___ctor_4870e5c(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
                    /* try { // try from 0231e900 to 0241e907 has its CatchHandler @ 0231e928 */
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x10),param_2);
                    /* try { // try from 0231e908 to 0241e90f has its CatchHandler @ 0231e92c */
  *(undefined8 *)(param_1 + 0x18) = param_3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),param_3);
  puVar1 = (undefined8 *)(param_1 + 0x20);
  *puVar1 = param_4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231e900 with catch @ 0231e928
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231e908 with catch @ 0231e92c
                        */
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

