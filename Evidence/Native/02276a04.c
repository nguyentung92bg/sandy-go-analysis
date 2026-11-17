/* IL2CPP: Dino.BusSand.App.Ads$$RewardScene
System_String_o* Dino_BusSand_App_Ads__RewardScene (System_String_o* slot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Ads$$RewardScene
   System_String_o* Dino_BusSand_App_Ads__RewardScene (System_String_o* slot, const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_Ads__RewardScene_2176a04(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_04cac740;
  if ((bRam0000000004f9b8e1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad070);
    FUN_02132f7c(PTR_DAT_04cad078);
    FUN_02132f7c(PTR_DAT_04cad080);
    FUN_02132f7c(PTR_DAT_04cad088);
    FUN_02132f7c(PTR_DAT_04cad090);
    FUN_02132f7c(PTR_DAT_04cac740);
    bRam0000000004f9b8e1 = 1;
  }
  uVar2 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)puVar1,0);
  puVar4 = (undefined8 *)PTR_DAT_04cad070;
                    /* try { // try from 02276aac to 02376ae7 has its CatchHandler @ 022769d4 */
  if (((uVar2 & 1) == 0) &&
     (uVar2 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cad088,0),
     puVar4 = (undefined8 *)PTR_DAT_04cad090, (uVar2 & 1) == 0)) {
                    /* catch() { ... } // from try @ 02276a90 with catch @ 02276ad4 */
    uVar2 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cad078,0);
    uVar3 = *(undefined8 *)PTR_DAT_04cad080;
    if ((uVar2 & 1) == 0) {
      uVar3 = param_1;
    }
  }
  else {
    uVar3 = *puVar4;
  }
  return uVar3;
}

