/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass119_1$$<OnLiftRaised>b__0
void Dino_BusSand_View_MechanicLayer___c__DisplayClass119_1___OnLiftRaised_b__0 (Dino_BusSand_View_MechanicLayer___c__DisplayClass119_1_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass119_1$$<OnLiftRaised>b__0
   void Dino_BusSand_View_MechanicLayer___c__DisplayClass119_1___OnLiftRaised_b__0
   (Dino_BusSand_View_MechanicLayer___c__DisplayClass119_1_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_View_MechanicLayer___c__DisplayClass119_1___OnLiftRaised_b__0_23d484c
               (undefined4 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
                    /* try { // try from 024d4874 to 025d4877 has its CatchHandler @ 024d487c */
  if ((bRam0000000004f9ca13 & 1) == 0) {
                    /* try { // try from 024d4878 to 025d489b has its CatchHandler @ 024d4578 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024d4874 with catch @ 024d487c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024d4794 with catch @ 024d4880
                        */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ca13 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(char *)(param_2 + 0x10) != '\0') {
                    /* try { // try from 024d489c to 025d489f has its CatchHandler @ 024d48c0 */
    uVar4 = *(undefined8 *)(param_2 + 0x18);
                    /* try { // try from 024d48a0 to 025d48c3 has its CatchHandler @ 024d4578 */
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
                    /* catch() { ... } // from try @ 024d489c with catch @ 024d48c0 */
    if ((uVar2 & 1) == 0) {
                    /* try { // try from 024d48c4 to 025d48cb has its CatchHandler @ 024d48d4 */
      if (*(long *)(param_2 + 0x30) != 0) {
                    /* try { // try from 024d48cc to 025d48d7 has its CatchHandler @ 024d4578 */
        uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x30) + 0x10);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024d48c4 with catch @ 024d48d4
                        */
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
        if ((uVar2 & 1) != 0) {
          return;
        }
        lVar3 = *(long *)(param_2 + 0x30);
        if ((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) {
          if (*(int *)(*(long *)(lVar3 + 0x10) + 0x2c) == 0) {
            lVar5 = *(long *)(param_2 + 0x18);
            if (cRam0000000004f9bcf8 == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              lVar3 = *(long *)(param_2 + 0x30);
              cRam0000000004f9bcf8 = '\x01';
              if (lVar3 == 0) goto LAB_024d4a2c;
            }
            if (*(long *)(lVar3 + 0x10) == 0) goto LAB_024d4a2c;
            Dino_BusSand_View_VehicleView__get_ModelHeightWorld_23fefb0(*(long *)(lVar3 + 0x10),0);
            Dino_BusSand_Easing__Evaluate_238b7d0(param_1,10,0);
          }
          else {
            *(undefined1 *)(param_2 + 0x10) = 0;
            if (*(long *)(param_2 + 0x18) == 0) goto LAB_024d4a2c;
            UnityEngine_Transform__get_position_43d0e48(*(long *)(param_2 + 0x18),0);
            lVar5 = *(long *)(param_2 + 0x18);
          }
          if (lVar5 != 0) {
            if ((bRam0000000004fa8b31 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf7a00,0);
              bRam0000000004fa8b31 = 1;
            }
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar3 = *(long *)(lVar5 + 0x10);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
            }
            if (pcRam0000000004fa8b88 == (code *)0x0) {
              pcRam0000000004fa8b88 = (code *)FUN_02132f40(&UNK_00e68510);
            }
            (*pcRam0000000004fa8b88)(lVar3,&stack0xffffffffffffffd4);
            return;
          }
        }
      }
LAB_024d4a2c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

