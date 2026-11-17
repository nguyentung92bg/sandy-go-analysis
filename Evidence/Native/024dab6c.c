/* IL2CPP: Dino.BusSand.View.PickUpClaw$$Spawn
Dino_BusSand_View_PickUpClaw_o* Dino_BusSand_View_PickUpClaw__Spawn (UnityEngine_GameObject_o* prefab, UnityEngine_Transform_o* parent, Dino_BusSand_View_VehicleView_o* car, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PickUpClaw$$Spawn
   Dino_BusSand_View_PickUpClaw_o* Dino_BusSand_View_PickUpClaw__Spawn (UnityEngine_GameObject_o*
   prefab, UnityEngine_Transform_o* parent, Dino_BusSand_View_VehicleView_o* car, const MethodInfo*
   method); */

undefined8
Dino_BusSand_View_PickUpClaw__Spawn_23dab6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 024dab78 to 025dab83 has its CatchHandler @ 024dac1c */
                    /* try { // try from 024dab90 to 025dab97 has its CatchHandler @ 024dac18 */
  if ((bRam0000000004f9ca3d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7798);
                    /* try { // try from 024dabb0 to 025dabbb has its CatchHandler @ 024dac2c */
    FUN_02132f7c(PTR_DAT_04cad390);
                    /* try { // try from 024dabbc to 025dac07 has its CatchHandler @ 024daa5c */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd848);
    FUN_02132f7c(PTR_DAT_04cbd850);
    bRam0000000004f9ca3d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 024dac08 to 025dac0b has its CatchHandler @ 024dac28 */
                    /* try { // try from 024dac0c to 025dac0f has its CatchHandler @ 024dac24 */
                    /* try { // try from 024dac10 to 025dac13 has its CatchHandler @ 024dac20 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 024dac14 to 025dac4b has its CatchHandler @ 024daa5c */
      thunk_FUN_0218fdac();
    }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024dab90 with catch @ 024dac18
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024dab78 with catch @ 024dac1c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024dac10 with catch @ 024dac20
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024dac0c with catch @ 024dac24
                        */
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_3,0,0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024dac08 with catch @ 024dac28
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024dabb0 with catch @ 024dac2c
                        */
    if ((uVar2 & 1) == 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024dab5c with catch @ 024dac30
                        */
      if (param_3 != 0) {
        uVar7 = *(undefined8 *)(param_3 + 0x38);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 024dac4c to 025dac4f has its CatchHandler @ 024dac68 */
                    /* try { // try from 024dac50 to 025dac6b has its CatchHandler @ 024daa5c */
        uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
        if ((uVar2 & 1) != 0) {
          return 0;
        }
                    /* catch() { ... } // from try @ 024dac4c with catch @ 024dac68 */
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 024dac6c to 025dac73 has its CatchHandler @ 024dac7c */
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 024dac74 to 025dac7f has its CatchHandler @ 024daa5c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024dac6c with catch @ 024dac7c
                        */
        lVar3 = UnityEngine_Object__Instantiate_object__2805310
                          (param_1,param_2,0,*(undefined8 *)PTR_DAT_04cad390);
        if (lVar3 != 0) {
          UnityEngine_Object__set_name_43c72ec(lVar3,*(undefined8 *)PTR_DAT_04cbd850,0);
          lVar4 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                            (lVar3,1,*(undefined8 *)PTR_DAT_04cb7798);
          if (lVar4 != 0) {
            uVar6 = *(uint *)(lVar4 + 0x18);
            if (0 < (int)uVar6) {
              lVar9 = 0;
              do {
                if (uVar6 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                lVar8 = *(long *)(lVar4 + 0x20 + lVar9 * 8);
                if (lVar8 == 0) goto LAB_024dad68;
                UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar8,0,0);
                UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar8,0,0);
                uVar6 = *(uint *)(lVar4 + 0x18);
                lVar9 = lVar9 + 1;
              } while ((int)lVar9 < (int)uVar6);
            }
            uVar7 = UnityEngine_GameObject__get_transform_43c1048(lVar3,0);
            uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbd848);
                    /* try { // try from 024dad4c to 025dae3f has its CatchHandler @ 024dad4c
                       catch() { ... } // from try @ 024dad4c with catch @ 024dad4c
                       catch() { ... } // from try @ 024daeac with catch @ 024dad4c
                       catch() { ... } // from try @ 024daee8 with catch @ 024dad4c
                       catch() { ... } // from try @ 024daf1c with catch @ 024dad4c
                       catch() { ... } // from try @ 024daf40 with catch @ 024dad4c */
            Dino_BusSand_View_PickUpClaw___ctor_23da438(uVar5,uVar7,param_3);
            return uVar5;
          }
        }
      }
LAB_024dad68:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return 0;
}

