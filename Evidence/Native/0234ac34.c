/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$RunHallUIOpen
System_Collections_IEnumerator_o* Dino_BusSand_App_Meta_PassportFeature__RunHallUIOpen (Dino_BusSand_App_Meta_PassportFeature_o* __this, System_String_o* cmd, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$RunHallUIOpen
   System_Collections_IEnumerator_o* Dino_BusSand_App_Meta_PassportFeature__RunHallUIOpen
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, System_String_o* cmd, const MethodInfo*
   method); */

long Dino_BusSand_App_Meta_PassportFeature__RunHallUIOpen_224ac34
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb3a78;
                    /* try { // try from 0234ac38 to 0244ac63 has its CatchHandler @ 0234ad9c */
  if ((bRam0000000004f9bf93 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3a78);
    bRam0000000004f9bf93 = 1;
  }
                    /* try { // try from 0234ac74 to 0244ac7f has its CatchHandler @ 0234ad80 */
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
                    /* try { // try from 0234ac8c to 0244ac9b has its CatchHandler @ 0234ad7c */
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_2);
                    /* try { // try from 0234acb0 to 0244acbb has its CatchHandler @ 0234ada0 */
  return lVar2;
}

