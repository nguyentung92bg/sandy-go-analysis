/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_StageCount
int32_t Dino_BusSand_App_Meta_PassportFeature__get_StageCount (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_StageCount
   int32_t Dino_BusSand_App_Meta_PassportFeature__get_StageCount
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cb3980;
                    /* try { // try from 023449f4 to 02444a03 has its CatchHandler @ 02344a04 */
  if ((bRam0000000004f9bf3a & 1) == 0) {
                    /* catch() { ... } // from try @ 02344970 with catch @ 02344a04
                       catch() { ... } // from try @ 023449f4 with catch @ 02344a04 */
                    /* try { // try from 02344a08 to 02444a0b has its CatchHandler @ 02344a28 */
    FUN_02132f7c(PTR_DAT_04cabaf0);
                    /* try { // try from 02344a0c to 02444a2b has its CatchHandler @ 0234430c */
    FUN_02132f7c(PTR_DAT_04cb3980);
    bRam0000000004f9bf3a = 1;
  }
                    /* catch() { ... } // from try @ 02344a08 with catch @ 02344a28 */
  lVar3 = Dino_BusSand_App_Meta_PassportFeature__CfgList_22449bc(param_1,*(undefined8 *)puVar1);
  uVar2 = 0;
  if (lVar3 != 0) {
    uVar2 = *(undefined4 *)(lVar3 + 0x18);
  }
  return uVar2;
}

