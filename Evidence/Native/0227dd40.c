/* IL2CPP: Dino.BusSand.App.UI.UIParticleSorting$$OwnerCanvasTransform
UnityEngine_Transform_o* Dino_BusSand_App_UI_UIParticleSorting__OwnerCanvasTransform (UnityEngine_Canvas_o* c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIParticleSorting$$OwnerCanvasTransform
   UnityEngine_Transform_o* Dino_BusSand_App_UI_UIParticleSorting__OwnerCanvasTransform
   (UnityEngine_Canvas_o* c, const MethodInfo* method); */

long Dino_BusSand_App_UI_UIParticleSorting__OwnerCanvasTransform_217dd40(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if ((bRam0000000004f9b910 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad3d0);
                    /* try { // try from 0227dd70 to 0237dd87 has its CatchHandler @ 0227e010 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b910 = 1;
  }
  puVar2 = PTR_DAT_04cad3d0;
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_1 != 0) {
    lVar3 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
    do {
                    /* try { // try from 0227dda0 to 0237dda7 has its CatchHandler @ 0227e00c */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
      if ((uVar4 & 1) == 0) {
        if ((bRam0000000004fa8306 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7648,0);
          FUN_02132f7c(PTR_DAT_04cf5c60);
          bRam0000000004fa8306 = 1;
        }
        puVar1 = PTR_DAT_04cf5c60;
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
        }
        if (pcRam0000000004fa8310 == (code *)0x0) {
          pcRam0000000004fa8310 = (code *)FUN_02132f40(&UNK_00e2fdd4);
        }
        uVar4 = (*pcRam0000000004fa8310)(lVar3);
        lVar3 = *(long *)puVar1;
        if (*(long *)(lVar3 + 0x38) == 0) {
          FUN_0216b4cc(lVar3);
        }
        if (uVar4 != 0) {
          if (cRam0000000004f9d849 == '\0') {
            FUN_02132f7c(&DAT_04ddbd40);
            cRam0000000004f9d849 = '\x01';
          }
          if ((uVar4 & 1) == 0) {
            plVar6 = (long *)System_IntPtr__op_Explicit_487833c();
            lVar5 = *plVar6;
          }
          else {
            lVar5 = System_Runtime_InteropServices_GCHandle__GetTarget_476c7dc(uVar4,0);
          }
          lVar3 = **(long **)(lVar3 + 0x38);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0216b470(lVar3);
          }
          if (lVar5 != 0) {
            lVar7 = thunk_FUN_0216e7a0(lVar5,lVar3);
            if (lVar7 != 0) {
              return lVar7;
            }
                    /* WARNING: Subroutine does not return */
            FUN_021335a4(lVar5,lVar3);
          }
        }
        return 0;
      }
      if (lVar3 == 0) break;
      lVar5 = UnityEngine_Component__GetComponent_object__26f97e8(lVar3,*(undefined8 *)puVar2);
      lVar7 = *(long *)puVar1;
                    /* try { // try from 0227dde0 to 0237dde3 has its CatchHandler @ 0227e018 */
      if (*(int *)(lVar7 + 0xe4) == 0) {
                    /* try { // try from 0227dde4 to 0237de0f has its CatchHandler @ 0227dcd0 */
        thunk_FUN_0218fdac(lVar7);
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
      if ((uVar4 & 1) != 0) {
        if (lVar5 == 0) break;
        uVar4 = UnityEngine_Canvas__get_overrideSorting_467feb8(lVar5,0);
                    /* try { // try from 0227de10 to 0237de17 has its CatchHandler @ 0227e018 */
                    /* try { // try from 0227de18 to 0237de2b has its CatchHandler @ 0227dcd0 */
        if (((uVar4 & 1) != 0) ||
           (uVar4 = UnityEngine_Canvas__get_isRootCanvas_467f378(lVar5,0), (uVar4 & 1) != 0)) {
          return lVar3;
        }
      }
                    /* try { // try from 0227de2c to 0237de3b has its CatchHandler @ 0227e018 */
      lVar3 = UnityEngine_Transform__get_parent_43d0d70(lVar3,0);
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

