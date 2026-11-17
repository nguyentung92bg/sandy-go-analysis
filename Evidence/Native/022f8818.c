/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$SetSprite
bool Dino_BusSand_App_UI_YachtRacingUi__SetSprite (UnityEngine_Transform_o* node, System_String_o* spriteName, bool nativeSize, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$SetSprite
   bool Dino_BusSand_App_UI_YachtRacingUi__SetSprite (UnityEngine_Transform_o* node,
   System_String_o* spriteName, bool nativeSize, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_YachtRacingUi__SetSprite_21f8818(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022f8838 to 023f883f has its CatchHandler @ 022f8978 */
  if ((bRam0000000004f9bc53 & 1) == 0) {
                    /* try { // try from 022f8848 to 023f884b has its CatchHandler @ 022f895c */
    FUN_02132f7c(PTR_DAT_04cad788);
                    /* try { // try from 022f8854 to 023f885b has its CatchHandler @ 022f8954 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 022f8860 to 023f8887 has its CatchHandler @ 022f8978 */
    bRam0000000004f9bc53 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 022f8888 to 023f888f has its CatchHandler @ 022f8958 */
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    plVar4 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                               (param_1,*(undefined8 *)PTR_DAT_04cad788);
    puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022f88a8 to 023f88b3 has its CatchHandler @ 022f8940 */
                    /* try { // try from 022f88b4 to 023f88cb has its CatchHandler @ 022f891c */
    if ((bRam0000000004f9bc52 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04cab490);
      bRam0000000004f9bc52 = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(plVar4,0,0);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = Dino_BusSand_App_UiAssets__Sprite_21636c4(param_2,0);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar5);
      }
      uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar2,0,0);
      if ((uVar3 & 1) == 0) {
        if (plVar4 != (long *)0x0) {
          UnityEngine_UI_Image__set_sprite_44a7258(plVar4,uVar2,0);
          if ((param_3 & 1) != 0) {
            (**(code **)(*plVar4 + 0x3f8))(plVar4,*(undefined8 *)(*plVar4 + 0x400));
          }
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
    return 0;
  }
  return 0;
}

